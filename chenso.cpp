#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1], i, x, y;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin >> x >> y;
    for(i=n; i>y-1; i--)
    {
        a[i] = a[i-1];
    }
    a[y-1] = x;
    for(i=0; i<=n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
