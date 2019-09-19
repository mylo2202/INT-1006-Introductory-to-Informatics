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
    for(i=0; i<m; i++)
    {
        for(j=k-1; j<n-1; j++)
        {
            a[i][j] = a[i][j+1];
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n-1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
