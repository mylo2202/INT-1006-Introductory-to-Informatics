#include <iostream>
using namespace std;

void checkSum(int a, int &cnt, int x=1)
{
    for(int i=x; i<=a; i++)
    {
        if(i<a)
        {
            checkSum(a-i, cnt, i+1);
        }
        else
        {
            if(i==a) cnt++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int cnt=0, x=1;
    checkSum(n, cnt, x);
    cout << cnt;
    return 0;
}
