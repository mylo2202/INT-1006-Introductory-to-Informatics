#include <iostream>
using namespace std;

int main()
{
    int n, i, p;
    cin >> n;
    p=1;
        for(i=2; i<=n; i++)
        {
            p=i;
            if(n%i==0)
            {
                break;
            }
            else
                continue;
        }
    if (p==n && p!=1)
        cout << "yes";
    else if (p!=n || p==1)
        cout << "no";
    return 0;
}
