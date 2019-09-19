#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s+=" ";
    int n = s.size(), a; char c;
    cin >> a >> c;
    for(int i = s.size() - 1; i>=a; i--)
    {
        s[i+1] = s[i];
    }
    s[a] = c;
    s[n+1] = '\0';
    cout << s;
    return 0;
}
