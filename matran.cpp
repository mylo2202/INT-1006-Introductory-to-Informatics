#include <iostream>
using namespace std;

int arr[1000][1000], i[1000], j[1000];

int main()
{
    int m, n, Q, a, b, k, x, y;
    cin >> m >> n >> Q;
    for(a=0; a<m; a++)
    {
        for(b=0; b<n; b++)
        {
            cin >> arr[a][b];
        }
    }
    for(k=0; k<Q; k++)
    {
        cin >> i[k] >> j[k];
    }
    for(k=0; k<Q; k++)
    {
        x=i[k]-1; y=j[k]-1;
        cout << arr[x][y] << endl;
    }
}
