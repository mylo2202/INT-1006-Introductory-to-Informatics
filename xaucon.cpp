#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, ss;
    cin >> s >> ss;
    int i, j;
    for(i = 0; i<ss.size() - s.size() + 1; i++)
    {
        for(j=0; j<s.size(); j++)
        {
            if(ss[j + i]==s[j])
                continue;
            else
                break;
        }
        if(j==s.size())
            break;
        else
            continue;
    }
    if(i==ss.size() - s.size() + 1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
