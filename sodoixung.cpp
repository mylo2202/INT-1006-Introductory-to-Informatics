#include <iostream>
#include <string.h>
using namespace std;

int numCheck(string n)
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
        return 1;
    else
        return 0;
}

int main()
{
    int T;
    cin >> T;
    int a[T], i;
    string n;
    for(i=0; i<T; i++)
    {
        cin >> n;
        a[i] = numCheck(n);
    }
    for(i=0; i<T; i++)
    {
        if(a[i]==1)
            cout << "yes" << endl;
        if(a[i]==0)
            cout << "no" << endl;
    }
    return 0;
}
