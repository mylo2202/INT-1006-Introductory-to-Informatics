#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float f1, f2, t, c, k;
    cin >> f1 >> f2;
    for (t=f1; t<=f2; t++)
    {
        c = (t-32)*5/9;
        k = c + 273.15;
        cout << fixed << setprecision(0) << t << " " << fixed << setprecision(2) << c << " " << k << endl;
    }
    return 0;
}
