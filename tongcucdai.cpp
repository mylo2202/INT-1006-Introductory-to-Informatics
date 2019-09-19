#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], i, s=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(a[0]>a[1])
        s+=a[0];
    if(a[n-1]>a[n-2])
        s+=a[n-1];
    for(i=1; i<n-1; i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
            s+=a[i];
    }
    cout << s;
    return 0;
}

