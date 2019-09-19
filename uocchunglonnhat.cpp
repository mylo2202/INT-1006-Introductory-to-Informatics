#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    int r;
    if(a<b)
    {
        r = a;
        a = b;
        b = r;
    }
    if(r=a%b)
    {
        a = b;
        b = r;
        return GCD(a, b);
    }
    else
        return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}
