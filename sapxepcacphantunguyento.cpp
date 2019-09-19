#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    int i, p = 1;
    for(i=2; i<=n; i++)
    {
        p=i;
            if(n%i==0)
            {
                break;
            }
            else
                continue;
    }
    if(p==n && p!=1)
        return true;
    else if(p!=n || p==1)
        return false;
}

int main()
{
    int n;
    vector<int> a(100);
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(isPrime(a[i]))
        {
            int minPos = i;
            for(int j=i+1; j<n; j++)
            {
                if((isPrime(a[j])) && a[j]<a[minPos])
                    {
                        swap(a[j], a[minPos]);
                        minPos = j;
                    }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
