#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], i, x, y, z;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin >> x >> y;
    z = a[x-1];
    a[x-1] = a[y-1];
    a[y-1] = z;
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
