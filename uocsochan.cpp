#include <iostream>
using namespace std;

int main()
{
    int n, i, cd=0;
    cin >> n;
    for (i=2; i<=n; i+=2)
    {
        if(n%i==0)
            cd++;
    }
    cout << cd;
    return 0;
}
