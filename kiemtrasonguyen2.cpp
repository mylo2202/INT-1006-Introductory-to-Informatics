#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    bool issquare;
    b = sqrt(a);
    if (a == b*b)
        issquare = true;
    else
        issquare = false;
    if (a%3==0 && a%5==1 && issquare == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
