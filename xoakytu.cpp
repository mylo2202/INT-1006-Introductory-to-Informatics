#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s; int a;
    cin >> s >> a;
    for(int i = a - 1; i<=s.size() - 1; i++)
    {
        s[i] = s[i+1];
    }
    cout << s;
    return 0;
}

