#include <iostream>
using namespace std;

int sum(int N)
{
    unsigned int tong=0;
    while (N>0)
    {
        int cs = N%10;
        tong += cs;
        N/=10;
    }
    return tong;
}

int main()
{
    int T;
    cin >> T;
    int i, a[T];
    for(i=0; i<T; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<T; i++)
    {
        cout << sum(a[i]) << endl;
    }
    return 0;
}
