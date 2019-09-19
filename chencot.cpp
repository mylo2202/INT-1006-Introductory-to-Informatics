#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n+1], i, j, k, x;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> k >> x;
    for(i=0; i<m; i++)
    {
        for(j=n; j>k-1; j--)
        {
            a[i][j] = a[i][j-1];
        }
        a[i][k-1] = x;
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
