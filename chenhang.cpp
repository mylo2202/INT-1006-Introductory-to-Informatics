#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m+1][n], i, j, k, x;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> k >> x;
    for(j=0; j<n; j++)
    {
        for(i=m; i>k-1; i--)
        {
            a[i][j] = a[i-1][j];
        }
        a[k-1][j] = x;
    }
    for(i=0; i<=m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
