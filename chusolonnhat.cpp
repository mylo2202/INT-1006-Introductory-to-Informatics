#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int i;
    char m;
    string n;
    cin >> n;
    m = n[0];
    for(i=1; i<=n.size() - 1; i++)
    {
        if(n[i]>m)
        {
            m = n[i];
        }
    }
    cout << m;
    return 0;
}
