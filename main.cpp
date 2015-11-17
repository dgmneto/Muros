#include <iostream>
#include <Casa.h>

#define ORIGEM 'S'
#define DESTINO 'T'
#define MURO '#'
#define CHAO '.'

#define QTD_DIRECOES 4

using namespace std;

const int direcoes[][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int n, m;

Casa ***mapa, **casas, *fim;
int qtd_casas = 0;

void lerDados()
{

    cin >> n;
    cin >> m;
    mapa = new Casa **[n];
    casas = new Casa *[n*m + 1];
    int i, j;
    for(i = 0; i < n; i++)
    {
        mapa[i] = new Casa *[m];
        for(j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            Casa *atual;
            if(a == DESTINO)
            {
                atual = new Casa(0, i, j, 0, -1, 0);
                fim = atual;
            }
            else if(a == ORIGEM)
            {
                atual = new Casa(0, i, j, 0, 0, 0);
                atual->setInserido(true);
                casas[0] = atual;
                qtd_casas += 1;
            }
            else if(a == MURO)
            {
                atual = new Casa(0, i, j, 0, -1, 1);
            }
            else
            {
                atual = new Casa(0, i, j, 0, -1, 0);
            }
            mapa[i][j] = atual;
        }
    }

    for(i = 0; i < n; i++)
    for(j = 0; j < m; j++)
        mapa[i][j]->setDistanciaDest((mapa[i][j]->getI() - fim->getI())*(mapa[i][j]->getI() - fim->getI()) + (mapa[i][j]->getJ() - fim->getJ())*(mapa[i][j]->getJ() - fim->getJ()));
}

void processarDados()
{
    int i, j;
    for(i = 0; i < qtd_casas; i++)
    {
        if(casas[i]->getDistanciaDest() == 1)
        {
            fim->setAnterior(casas[i]);
            fim->setCusto(casas[i]->getCusto());
            break;
        }
        Casa *atual = casas[i];
        for(j = 0; j < QTD_DIRECOES; j++)
        {
            if(atual->getI() + direcoes[j][0] < 0 || atual->getJ() + direcoes[j][1] < 0 || atual->getI() + direcoes[j][0] >= n || atual->getJ() + direcoes[j][1] >= m)
                continue;
            Casa *atual_1 = mapa[atual->getI() + direcoes[j][0]][atual->getJ() + direcoes[j][1]];
            if(atual_1->isProcessado())
                continue;
            if(atual_1->isInserido() && atual_1->getCusto() <= (atual->getCusto() + atual_1->getCustoLocal()))
                continue;
            atual_1->setAnterior(atual);
            atual_1->setCusto(atual->getCusto() + atual_1->getCustoLocal());
            if(!atual_1->isInserido())
            {
                Casa::inserirOrdenado(casas, i + 1, qtd_casas, atual_1);
                atual_1->setInserido(true);
                qtd_casas += 1;
            }
            else
            {
                Casa::reordenarUnico(casas, i + 1, atual_1);
            }
        }
        atual->setProcessado(true);
    }
}


void imprimirDados()
{
    cout << fim->getCusto() << "\n";

    Casa *atual = fim;
    do
    {
        if(atual->getCustoLocal())
            cout << atual->getI() << " " << atual->getJ() << "\n";
        atual = atual->getAnterior();
    } while(atual != 0);
}

int main()
{
    freopen("entrada.in", "r", stdin);
    freopen("berinjela.out", "w", stdout);

    lerDados();

    processarDados();

    imprimirDados();

    return 0;
}
