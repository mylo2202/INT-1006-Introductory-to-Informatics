#include <iostream>
#include <stdio.h>
using namespace std;

struct Day{
    int date, month, year;

    Day() {}

    Day (int _date, int _month, int _year){
        date = _date;
        month = _month;
        year = _year;
    }

    void getDay(int &date, int &month, int &year)
    {
        scanf("%d/%d/%d", &date, &month, &year);
    }

    void getNextDay(int &date, int &month, int &year){
        date += 1;
        printf("%d/%d/%d", date, month, year);
    }
};

int main() {
    Day d;
    d.getDay(d.date, d.month, d.year);
    d.getNextDay(d.date, d.month, d.year);
    return 0;
}

