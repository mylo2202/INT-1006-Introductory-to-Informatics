#include <iostream>
using namespace std;

int main()
{
    int m, n, a, b, i, j, arr[500][500], x;
    cin >> m >> n;
    for(a=0; a<m; a++)
    {
        for(b=0; b<n; b++)
        {
            cin >> arr[a][b];
        }
    }
    cin >> i >> j >> x;
    arr[i-1][j-1] = x;
    for(a=0; a<m; a++)
    {
        for(b=0; b<n; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    return 0;
}
