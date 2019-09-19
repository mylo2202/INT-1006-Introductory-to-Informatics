#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
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
            if(x0>=0)
            {
                if(abs(x0)<0.00001)
                    {
                        cout << "phuong trinh co 1 nghiem" << endl;
                        cout << fixed << setprecision(5) << abs(x0);
                    }
                else
                    {
                        cout << "phuong trinh co 2 nghiem" << endl;
                        cout << fixed << setprecision(5) << -sqrt(x0) << " " << sqrt(x0);
                    }
            }
            else
                cout << "phuong trinh vo nghiem";
        }
        else if(delta>0)
        {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            if(x1>=0 && x2>=0)
            {
                if(abs(x1)<0.00001 && abs(x2)>0.00001)
                {
                    cout << "phuong trinh co 3 nghiem" << endl;
                    cout << fixed << setprecision(5) << -sqrt(x2) << " " << abs(x1) << " " << sqrt(x2);
                }
                if(abs(x2)<0.00001 && abs(x1)>0.00001)
                {
                    cout << "phuong trinh co 3 nghiem" << endl;
                    cout << fixed << setprecision(5) << -sqrt(x1) << " " << abs(x2) << " " << sqrt(x1);
                }
                if(abs(x1)>0.00001 && abs(x2)>0.00001)
                {
                    cout << "phuong trinh co 4 nghiem" << endl;
                    if(x1>x2)
                    {
                        cout << fixed << setprecision(5) << -sqrt(x1) << " " << -sqrt(x2) << " " << sqrt(x2) << " " << sqrt(x1);
                    }
                    else
                    {
                        cout << fixed << setprecision(5) << -sqrt(x2) << " " << -sqrt(x1) << " " << sqrt(x1) << " " << sqrt(x2);
                    }
                }
            }
            if(x1<0 && x2>=0)
            {
                if(abs(x2)<0.00001)
                {
                    cout << "phuong trinh co 1 nghiem" << endl;
                    cout << fixed << setprecision(5) << abs(x2);
                }
                else
                {
                    cout << "phuong trinh co 2 nghiem" << endl;
                    cout << fixed << setprecision(5) << -sqrt(x2) << " " << sqrt(x2);
                }
            }
            if(x1<0 && x2<0)
            {
                cout << "phuong trinh vo nghiem";
            }
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
            if(x0>=0)
            {
                if(abs(x0)<0.00001)
                {
                    cout << "phuong trinh co 1 nghiem" << endl
                         << fixed << setprecision(5) << abs(x0);
                }
                else
                {
                    cout << "phuong trinh co 2 nghiem" << endl
                         << fixed << setprecision(5) << -sqrt(x0) << " " << sqrt(x0);
                }
            }
            else
                cout << "phuong trinh vo nghiem";
        }
        else
        {
            if(c==0)
                cout << "phuong trinh co vo so nghiem";
            else
                cout << "phuong trinh vo nghiem";
        }
    }
}
