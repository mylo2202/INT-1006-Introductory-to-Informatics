#include <iostream>
using namespace std;

int main()
{
    int n, i, j, s, a[100];
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        s=0;
        for(j=0; j<=i; j++)
        {
            s+=a[j];
        }
        cout << s << " ";
    }
    return 0;
}
