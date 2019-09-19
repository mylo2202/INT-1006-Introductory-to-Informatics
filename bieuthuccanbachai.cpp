#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double sqrtSum(int n)
{
    if(n==1)
        return sqrt(1);
    else
        return sqrt(n + sqrtSum(n-1));
}

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << sqrtSum(n);
    return 0;
}
