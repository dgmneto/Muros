#include "vectorCasa.h"
#include <string.h>

vectorCasa::vectorCasa(int n, int m)
{
    custosN = n;
    custosM = m;
    indices = new int *[n];
    for(int i = 0; i < n; i++)
    {
        indices[i] = new int[m];
    }
    memset(indices, -1, sizeof(indices[0][0])*n*m);
    casas = new vector<Casa *>();
}

vectorCasa::~vectorCasa(void)
{
    for(vector<Casa *>::iterator it = casas->begin(); it != casas->end(); ++it)
    {
        delete *it;
    }
    delete casas;
    for(int i = 0; i < custosN; i++)
        delete custos[i];
    delete custos;
}

void vectorCasa::insert(Casa *casa)
{
    vector<Casa *>::iterator it;
    for(it = casas->begin(); it != casas->end(); ++it)
    {
        Casa atual = **it;
        if(atual.getCusto() >= casa->getCusto() && atual.getDistanciaDest() >= casa->getDistanciaDest())
        {
            break;
        }
    }
    casas->insert(it, casa);
}

vector<Casa *> *vectorCasa::getCasas()
{
    return casas;
}

void vectorCasa::setCasas(vector<Casa *> *casas)
{

    this->casas = casas;
}

vector<Casa *>::iterator vectorCasa::begin()
{
    return casas->begin();
}

vector<Casa *>::iterator vectorCasa::end()
{
    return casas->end();
}
