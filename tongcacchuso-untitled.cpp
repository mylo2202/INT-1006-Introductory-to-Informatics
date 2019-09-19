#include <iostream>
using namespace std;

int main()
{
    long int N; unsigned int tong=0;
    cin >> N;
    while (N>0)
    {
        int cs = N%10;
        tong += cs;
        N/=10;
    }
    cout << tong;
}
