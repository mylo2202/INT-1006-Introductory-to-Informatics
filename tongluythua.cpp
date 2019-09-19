#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    long int S=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        S+=pow(i,i);
    }
    cout << S;
}


