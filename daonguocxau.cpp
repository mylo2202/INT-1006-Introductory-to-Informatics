#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    int i;
    char c;
    cin >> s;
    for(i=0; i<s.size()/2; i++)
    {
        c = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = c;
    }
    cout << s;
    return 0;
}
