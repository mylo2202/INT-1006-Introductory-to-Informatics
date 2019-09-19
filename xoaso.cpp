#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], i, y;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin >> y;
    for(i=y-1; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    for(i=0; i<n-1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
