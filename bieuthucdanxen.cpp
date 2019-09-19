#include <iostream>
#include <math.h>
using namespace std;

long long P(int n)
{
    if(n==1)
        return 1;
    else
        return n*pow(-1,n+1) + P(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << P(n);
    return 0;
}
