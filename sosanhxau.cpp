#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int i;
    if(s1.size() == s2.size())
    {
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]==s2[i])
               continue;
            else
                break;
        }
        if(i==s1.size())
            cout << "yes";
        else
            cout << "no";
    }
    else
        cout << "no";
}
