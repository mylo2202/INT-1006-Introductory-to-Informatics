#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    char c;
    int i;
    cin >> s;
    cin >> i;
    cin >> c;
    s[i] = c;
    cout << s;
    return 0;
}
