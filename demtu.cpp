#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int words = 1;
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            words++;
        }
    }
    cout << words << endl;
    return 0;
}
