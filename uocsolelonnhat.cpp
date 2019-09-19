#include <iostream>
using namespace std;

int gcd(unsigned int n)
{
    for(unsigned int i=n-1; i>=1; i--)
    {
        if(n%i==0 && i%2==1)
        {
            return i;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    int a[T], i;
    for(i=0; i<T; i++)
    {
        cin >> a[i];
        a[i] = gcd(a[i]);
    }
    for(i=0; i<T; i++)
    {
        cout << a[i] << endl;
    }
}
