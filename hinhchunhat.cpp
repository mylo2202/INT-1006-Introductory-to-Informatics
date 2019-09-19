#include <iostream>

using namespace std;

struct Retangle
{
    int width;
    int length;

    Retangle() {}

    int cal_P(int width, int length)
    {
        return 2*(width + length);
    }

    int cal_S(int width, int length)
    {
        return width*length;
    }
};

int main()
{
    Retangle r;
    cin >> r.width >> r.length;

    cout << r.cal_P(r.width, r.length) << " " << r.cal_S(r.width, r.length);

    return 0;
}
