#include <iostream>

using namespace std;

int main()
{
    int n, m, i;
    cin >> n >> m;
    char **mapa = new char*[n];
    for(i = 0; i < n; i++)
        mapa[i] = new char[m];
    int j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> mapa[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << mapa[i][j];
        }
    }
    return 0;
}
