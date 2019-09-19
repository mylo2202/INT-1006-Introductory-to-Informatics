#include <iostream>
#include <string.h>
using namespace std;

int searchNum(string n, char& x)
{
    int i;
    for(i=0; i<n.size(); i++)
    {
        if(n[i]!=x)
            continue;
        else
            return i+1;
    }
    if(i==n.size())
        return -1;
}

int main()
{
    int T;
    cin >> T;
    int a[T], i;
    string n;
    char x;
    for (i=0; i<T; i++)
    {
        cin >> n >> x;
        a[i] = searchNum(n, x);
    }
    for (i=0; i<T; i++)
    {
        cout << a[i] << endl;
    }
}
