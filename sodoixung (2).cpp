#include <iostream>
#include <string.h>
using namespace std;

bool numCheck(string n)
{
    int i;
    for(i=0; i<n.size(); i++)
    {
        if(n[i] == n[n.size()-1-i])
            continue;
        else
            break;
    }
    if(i==n.size())
        return true;
    else
        return false;
}

int main()
{
    int T;
    cin >> T;
    bool a[T];
    int i;
    string n;
    for(i=0; i<T; i++)
    {
        cin >> n;
        a[i] = numCheck(n);
    }
    for(i=0; i<T; i++)
    {
        if(a[i]==true)
            cout << "yes" << endl;
        if(a[i]==false)
            cout << "no" << endl;
    }
    return 0;
}

