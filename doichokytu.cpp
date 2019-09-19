#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    char c;
    int i, j;
    cin >> s;
    cin >> i >> j;
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    cout << s;
}
