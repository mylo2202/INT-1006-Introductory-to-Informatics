#include <iostream>
#include <string>

using namespace std;

bool check(string n)
{
    int odds = 0, evens = 0;
    for(int i=0; i<n.size(); i++)
    {
        if(n[i]=='0' || n[i]=='2' || n[i]=='4' || n[i]=='6' || n[i]=='8')
        {
            odds++;
        }
        if(n[i]=='1' || n[i]=='3' || n[i]=='5' || n[i]=='7' || n[i]=='9')
        {
            evens++;
        }
    }
    if(odds==0 || evens==0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int N;
    cin >> N;
    bool a[N];
    int i;
    string n;
    for(i=0; i<N; i++)
    {
        cin >> n;
        a[i] = check(n);
    }
    for(i=0; i<N; i++)
    {
        if(a[i])
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
