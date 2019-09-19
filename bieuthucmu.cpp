#include <iostream>
#include <cmath>
using namespace std;

int S(int n)
{
    if(n==1)
        return pow(1, 1);
    else
        return pow(n, n) + S(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << S(n);
    return 0;
}
