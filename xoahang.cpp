#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n], i, j, k;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for(j=0; j<n; j++)
    {
        for(i=k-1; i<m-1; i++)
        {
            a[i][j] = a[i+1][j];
        }
    }
    for(i=0; i<m-1; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
