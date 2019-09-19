#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    float avg = 0;
    int minimum = a[0], maximum = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<minimum)
            minimum = a[i];
        if(a[i]>maximum)
            maximum = a[i];
        avg+=a[i];
    }
    avg/=n;
    cout << fixed << setprecision(2) << avg << endl << maximum << endl << minimum << endl;
    return 0;
}
