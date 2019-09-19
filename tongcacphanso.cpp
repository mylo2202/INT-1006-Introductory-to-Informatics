#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float i, s=0;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        s+=i/(i+1);
    }
    cout << fixed << setprecision(5) << s;
    return 0;
}
