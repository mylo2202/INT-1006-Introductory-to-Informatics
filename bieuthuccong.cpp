#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    long int s=0, S=0;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            s+=j;
        }
        S+=s;
        s=0;
    }
    cout << S;
}

