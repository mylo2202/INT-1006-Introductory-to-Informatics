#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return 2*sum(n-1) + sum(n-2) + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
