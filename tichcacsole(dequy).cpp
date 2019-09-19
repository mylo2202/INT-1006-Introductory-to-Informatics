#include <iostream>
using namespace std;

long long product(int n)
{
    if(n==0)
        return 1;
    else
        return (2*n+1)*product(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << product(n);
    return 0;
}

