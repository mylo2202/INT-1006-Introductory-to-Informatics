#include <iostream>
using namespace std;

int difference(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return 3*difference(n-1) - difference(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << difference(n);
    return 0;
}

