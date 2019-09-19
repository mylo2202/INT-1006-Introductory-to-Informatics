#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    long int f=1, s=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            f*=j;
        }
        s+=f;
        f=1;
    }
    cout << s;
}
