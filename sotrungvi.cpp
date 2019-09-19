#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], i;
    for(i=0; i<n; i++) cin >> a[i];
    sort(a, a + n);
    if(n % 2 == 1) cout << fixed << setprecision(1) << a[(n-1)/2]*1.0;
    else cout << fixed << setprecision(1) << (a[(n-1)/2] + a[(n-1)/2 + 1])*0.5;
    return 0;
}
