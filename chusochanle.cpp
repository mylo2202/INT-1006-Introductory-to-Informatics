#include <iostream>
#include <string.h>
using namespace std;

int countOdds(string n)
{
    int odds = 0, i;
    for(i=0; i<n.size(); i++)
    {
        if(n[i]=='0' || n[i]== '2' || n[i]=='4' || n[i]=='6' || n[i]=='8')
            odds++;
    }
    return odds;
}

int countEvens(string n)
{
    int evens = 0, i;
    for(i=0; i<n.size(); i++)
    {
        if(n[i]=='1' || n[i]== '3' || n[i]=='5' || n[i]=='7' || n[i]=='9')
            evens++;
    }
    return evens;
}

int main()
{
    int T;
    cin >> T;
    string n;
    int odds[T], evens[T], i;
    for(i=0; i<T; i++)
    {
        cin >> n;
        odds[i] = countOdds(n);
        evens[i] = countEvens(n);
    }
    for(i=0; i<T; i++)
    {
        cout << odds[i] << " " << evens[i] << endl;
    }
}
