#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {

        int n, d;
        cin >> n >> d;
        int a[n];
        int count = 0;
        int phase = 0; // phase = 0 indicates short and phase = 1 indicates long
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (phase == 0 && a[i] > d)
            {
                count++;
                phase = 1;
            }
            if (phase == 1 && a[i] <= d)
            {
                count++;
                phase = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}