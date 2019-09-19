#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << rand() % 10 << " ";
        }
        cout << "\n";
    }
    return 0;
}
