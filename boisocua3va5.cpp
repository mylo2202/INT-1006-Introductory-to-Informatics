#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], i, s=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%3==0 && a[i]%5==0)
        {
            s+=a[i];
        }
    }
    cout << s;
    return 0;
}

