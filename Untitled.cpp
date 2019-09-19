#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int hour, minute, second;

    Interval() {}

    Interval(int _hour, int _minute, int _second)
    {
        hour = _hour;
        minute = _minute;
        second = _second;
    }

    Interval plus(Interval interval)
    {
        Interval sum;
        sum.minute = 0; sum.hour = 0;
        sum.second = second + interval.second;
        if(sum.second >= 60)
        {
            sum.minute++;
            sum.second = sum.second % 60;
        }
        sum.minute = sum.minute + minute + interval.minute;
        if(sum.minute >= 60)
        {
            sum.hour++;
            sum.minute = sum.minute % 60;
        }
        sum.hour = sum.hour + hour + interval.hour;
        return sum;
    }

    void print()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
	/*
	Interval time1;
	cin >> time1.hour >> time1.minute >> time1.second;
	time1.print();
	Interval time2;
	cin >> time2.hour >> time2.minute >> time2.second;
	time2.print();
	Interval interval = time1.plus(time2);
	interval.print();
	return 0;
	*/

	int numTests;  cin >> numTests;
	for (int test = 0; test < numTests; ++test)  {
              int hours1, minutes1, seconds1;
              cin >> hours1 >> minutes1 >> seconds1;
              Interval interval1(hours1, minutes1, seconds1);
              int hours2, minutes2, seconds2;
              cin >> hours2 >> minutes2 >> seconds2;
              Interval interval2(hours2, minutes2, seconds2);
              Interval interval = interval1.plus(interval2);
              interval.print();
	}

}
