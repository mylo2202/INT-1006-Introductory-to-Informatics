#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float point, avg = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> point;
        avg += point;
    }
    avg/=n;
    cout << fixed << setprecision(2) << avg;
    return 0;
}
