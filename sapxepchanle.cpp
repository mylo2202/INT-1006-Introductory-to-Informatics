#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, odd=0, even=0;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    int odds[odd], evens[even]; odd=0; even=0;
    for(i=0; i<n; i++)
    {
        if(a[i]%2==1)
        {
            odds[odd] = a[i];
            odd++;
        }
        else
        {
            evens[even] = a[i];
            even++;
        }
    }
    sort(evens, evens+even);
    sort(odds, odds+odd);
    reverse(odds, odds + odd);
    for(i=0; i<even; i++) cout << evens[i] << " ";
    for(i=0; i<odd; i++) cout << odds[i] << " ";
    return 0;
}
