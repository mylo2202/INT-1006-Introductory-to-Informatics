#include <iostream>
#include <iomanip>

using namespace std;

struct Cylinder{
    int radius,hight;
    Cylinder (int _radius, int _hight){
        radius = _radius;
        hight = _hight;
    }

    Cylinder() {}

    double getSurfaceArea(int radius, int hight){
        return 2*3.14*hight + 2*3.14*radius*radius;
    }
    double getVolume(int radius, int hight){
        return 3.14*radius*radius*hight;
    }
};

int main() {
    Cylinder c;
    cin >> c.radius >> c.hight;

    cout << fixed << setprecision(2) << c.getSurfaceArea(c.radius, c.hight) << " " << c.getVolume(c.radius, c.hight);

    return 0;
}
