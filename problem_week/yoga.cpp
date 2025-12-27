#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n, x, y;
        cin >> n >> x >> y;
        double p2 = (double)y / 2;

        int max = 0;
        if (p2 > x)
        {
            max = max + ((n / 2) * y) + ((n - (n / 2) * 2) * x);
        }
        else
        {
            max = max + n * x;
        }

        cout << max << endl;
    }
    return 0;
}