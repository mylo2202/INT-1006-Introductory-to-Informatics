#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j;
    cin >> m >> n;
    int a[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    int x = a[i1-1][j1-1];
    a[i1-1][j1-1] = a[i2-1][j2-1];
    a[i2-1][j2-1] = x;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
