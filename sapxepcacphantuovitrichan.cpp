#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n], b[n/2], j=0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(i%2==0)
        {
            b[j] = a[i];
            j++;
        }
    }
    if(j!=0)
    {
        sort(b, b+j);
        reverse(b, b+j);
        int x;
        for(j=0; j<n/2; j++)
        {
            x = b[j];
            b[j] = b[n/2-1-j];
            b[n/2-1-j] = x;
        }
    }
    j=0;
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            a[i] = b[j];
            j++;
        }
    }
    for(i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;

}
