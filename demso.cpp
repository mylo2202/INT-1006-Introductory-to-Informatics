#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], i, positives=0, negatives=0, zeroes=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]>0)
        {
            positives++;
        }
        else if(a[i]<0)
            negatives++;
        else if(a[i]==0)
            zeroes++;
    }
    cout << negatives << " " << positives << " " << zeroes << endl;
    return 0;
}
