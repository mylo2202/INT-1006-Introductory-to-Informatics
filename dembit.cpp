#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, bits=0;
    string b;
    cin >> n;
    while (n>0)
    {
        if(n%2!=0)
            b=b + "1";
        else
            b=b + "0";
        n/=2;
    }
    for(int i=0; i< b.size(); i++)
    {
        if(b[i]=='1')
            ++bits;
    }
    cout << bits;
    return 0;
}
