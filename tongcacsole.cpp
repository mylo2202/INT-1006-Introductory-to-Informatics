#include <iostream>
using namespace std;

int main()
{
    int i, n, s=0;
    cin >> n;
    for(i=1;i<=2*n+1; i+=2)
    {
        s+=i;
    }
    cout << s;
    return 0;
}
