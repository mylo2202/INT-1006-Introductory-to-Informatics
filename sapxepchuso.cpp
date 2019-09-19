#include <iostream>
#include <string>

using namespace std;

string numSort(string n)
{
    for(int i=0; i<n.size(); i++)
    {
        int minimum = i;
        for(int j=i+1; j<n.size(); j++)
        {
            if(n[j] < n[minimum])
            {
                minimum = j;
            }
        }
        char x = n[i];
        n[i] = n[minimum];
        n[minimum] = x;
    }
    return n;
}

int main()
{
    int N;
    cin >> N;
    string n[N];
    for(int i=0; i<N; i++)
    {
        cin >> n[i];
        n[i] = numSort(n[i]);
    }
    for(int i=0; i<N; i++)
    {
        cout << n[i] << endl;
    }
    return 0;
}
