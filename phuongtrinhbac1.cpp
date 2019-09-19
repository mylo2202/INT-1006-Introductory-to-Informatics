#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, x;
    cin >> a >> b;
    if(a==0)
    {
        if(b==0)
        {
            cout << "phuong trinh co vo so nghiem";
        }
        else
        {
            cout << "phuong trinh vo nghiem";
        }
    }
    else
    {
        x=-b/a;
        cout << fixed << setprecision(2) << x << endl;
    }
    return 0;
}
