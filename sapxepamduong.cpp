#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n], positives_cnt = 0, negatives_cnt = 0, zeroes_cnt = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] > 0) positives_cnt++;
        if(a[i] < 0) negatives_cnt++;
        if(a[i] == 0) zeroes_cnt++;
    }
    int positives[positives_cnt], negatives[negatives_cnt], zeroes[zeroes_cnt];
    positives_cnt = 0; negatives_cnt = 0; zeroes_cnt = 0;
    for(i=0; i<n; i++)
    {
        if(a[i] > 0)
        {
            positives[positives_cnt] = a[i];
            positives_cnt++;
        }
        if(a[i] < 0)
        {
            negatives[negatives_cnt] = a[i];
            negatives_cnt++;
        }
        if(a[i] == 0)
        {
            zeroes[zeroes_cnt] = a[i];
            zeroes_cnt++;
        }
    }
    sort(positives, positives + positives_cnt);
    sort(negatives, negatives + negatives_cnt);
    reverse(negatives, negatives + negatives_cnt);
    positives_cnt = 0; negatives_cnt = 0; zeroes_cnt = 0;
    for(i=0; i<n; i++)
    {
        if(a[i] > 0)
        {
            cout << positives[positives_cnt] << " ";
            positives_cnt++;
        }
        if(a[i] < 0)
        {
            cout << negatives[negatives_cnt] << " ";
            negatives_cnt++;
        }
        if(a[i] == 0)
        {
            cout << zeroes[zeroes_cnt] << " ";
        }
    }
    return 0;
}
