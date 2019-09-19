#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float avg = 0, multiplier = 0;;
    cin >> n;
    float a[n];
    int b[n], i = 0, j = 0;
    while(i<n && j<n)
    {
        cin >> a[i] >> b[j];
        avg+=a[i]*b[j];
        multiplier+=b[j];
        i++; j++;
    }
    avg/=multiplier;
    cout << fixed << setprecision(2) << avg;
    return 0;
}
