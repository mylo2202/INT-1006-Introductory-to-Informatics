#include <iostream>
#include <algorithm>
using namespace std;

bool isOdd(int x)
{
    if(x%2==1)
        return true;
    else
        return false;
}

int main()
{
    int n, i;
    cin >> n;
    int a[n], b[n], odds=0, j=0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(isOdd(a[i])) odds++;
    }
    if(odds!=0) int b[odds];
    for(i=0; i<n; i++)
    {
        if(isOdd(a[i]))
        {
            b[j] = a[i];
            j++;
        }
    }
    sort(b, b+odds);
    j=0;
    for(i=0; i<n; i++)
    {
        if(isOdd(a[i]))
        {
            a[i] = b[j];
            j++;
        }
    }
    for(i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;

}
