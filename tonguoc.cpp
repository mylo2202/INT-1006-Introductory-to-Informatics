#include <iostream>
using namespace std;

int sum(unsigned int n)
{
    int cdsum = 0;
    for(unsigned int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cdsum+=i;
        }
    }
    return cdsum;
}

int main()
{
    int T;
    cin >> T;
    int a[T], i;
    for(i=0; i<T; i++)
    {
        cin >> a[i];
        a[i] = sum(a[i]);
    }
    for(i=0; i<T; i++)
    {
        cout << a[i] << endl;
    }
}

