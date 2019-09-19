#include <iostream>
#include <string.h>
using namespace std;

int primesCount(string n)
{
    int primes = 0, i;
    for(i=0; i<n.size(); i++)
    {
        if(n[i]=='2' || n[i]== '3' || n[i]=='5' || n[i]=='7')
            primes++;
    }
    return primes;
}

int main()
{
    int T;
    cin >> T;
    string n;
    int a[T], i;
    for(i=0; i<T; i++)
    {
        cin >> n;
        a[i] = primesCount(n);
    }
    for(i=0; i<T; i++)
    {
        cout << a[i] << endl;
    }
}
