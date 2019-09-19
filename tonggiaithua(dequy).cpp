#include <iostream>
using namespace std;

long long fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n, i;
    long long sum=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        sum+=fact(i);
    }
    cout << sum;
    return 0;
}
