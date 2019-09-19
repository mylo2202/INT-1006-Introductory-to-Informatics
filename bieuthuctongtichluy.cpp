#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n + sum(n-1);
}

int main()
{
    int n, i, S=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        S+=sum(i);
    }
    cout << S;
    return 0;
}
