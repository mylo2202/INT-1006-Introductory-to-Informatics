#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == -1)
        {
            cout << "bye" << endl;
            break;
        }
        else if(n % 5 == 0 && n > 0) cout << n/5 << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
