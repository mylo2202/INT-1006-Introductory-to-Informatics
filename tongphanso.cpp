#include <iostream>
#include <iomanip>
using namespace std;

double sum(double n)
{
    if(n==1)
        return 1;
    else
        return n + sum(n-1);
}

double S(double n)
{
    if (n==1)
        return 1/1;
    else
        return 1/(sum(n)) + S(n-1);
}

int main()
{
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << S(n);
    return 0;
}
