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
    int sum[m];
    for(i=0; i<m; i++)
    {
        sum[i] = 0;
        for(j=0; j<n; j++)
        {
            sum[i]+=a[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        cout << sum[i] << " ";
    }
    return 0;
}
