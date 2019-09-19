#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], i, odds=0, evens=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            evens++;
        }
        else
            odds++;
    }
    cout << evens << " " << odds << endl;
    return 0;
}
