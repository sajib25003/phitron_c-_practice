#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int total = 0;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                total += (a / 2);
            }
            else
            {
                total += 1 + (a / 2);
            }
        }
        cout << total << endl;
    }

    return 0;
}