#include <iostream>
using namespace std;

int main()
{
    int i, n;
    long long p=1;
    cin >> n;
    for(i=1;i<=2*n+1; i+=2)
    {
        p*=i;
    }
    cout << p;
    return 0;
}
