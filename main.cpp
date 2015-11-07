#include <iostream>
#include <Casa.h>

using namespace std;

int main()
{
    int n, m, i;
    cin >> n >> m;
    char **mapa = new char*[n];
    for(i = 0; i < n; i++)
        mapa[i] = new char[m];
    Casa *inicio, *fim;
    int j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            char a;
            cin >> a;
            if(a == 'T')
            {
                fim = new Casa(i, j, -1, 0);
            }
            else if(a == 'P')
            {
                inicio = new Casa(i, j, 0, -1);
            }
            mapa[i][j] = a;
        }
    }



    return 0;
}
