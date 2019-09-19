#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x0, x1, x2;
    cin >> a >> b >> c;
    if(a!=0)
    {
        float delta=b*b - 4*a*c;
        if(delta==0)
        {
            x0=-b/(2*a);
            cout << "phuong trinh co 1 nghiem" << endl;
            if(abs(x0)<0.00001)
                cout << fixed << setprecision(5) << abs(x0);
            else
                cout << fixed << setprecision(5) << x0;
        }
        else if(delta>0)
        {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout << "phuong trinh co 2 nghiem" << endl
                 << fixed << setprecision(5) << x1 << " " << x2;
        }
        else
        {
            cout << "phuong trinh vo nghiem";
        }
    }
    else
    {
        if(b!=0)
        {
            x0=-c/b;
            cout << "phuong trinh co 1 nghiem" << endl
                 << fixed << setprecision(5) << x0;
        }
        else
        {
            if(c==0)
                cout << "phuong trinh co vo so nghiem";
            else
                cout << "phuong trinh vo nghiem";
        }
    }
    return 0;
}
