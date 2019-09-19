#include <iostream>
using namespace std;

int main()
{
    int m, n, a, b, a0=0, b0=0, x, y;
    cin >> m;
    a=m;
    while(a!=0)
    {
        x=a%10;
        a0=a0*10+x;
        a=a/10;
    }
    if(m>a0)
    {
        n=m-a0;
        b=n;
        while(b!=0)
        {
            y=b%10;
            b0=b0*10+y;
            b=b/10;
        }
        cout << n+b0;
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}
