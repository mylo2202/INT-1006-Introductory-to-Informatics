#include <iostream>
using namespace std;

void arraySort(int a[], int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        int minimum = i;
        for(int j=i+1; j<arraySize; j++)
        {
            if(a[j] < a[minimum])
            {
                minimum = j;
            }
        }
        int x = a[i];
        a[i] = a[minimum];
        a[minimum] = x;
    }
}

int main()
{
    int n, i, x;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    arraySort(a, n);
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
