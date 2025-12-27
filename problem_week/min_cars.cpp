#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, req;
        cin >> n;
        if (n % 4 == 0)
        {
            req = n / 4;
            cout << "n%4 : " << n << ' ' << req << endl;
        }
        else
        {
            req = 1 + (n / 4);
            cout << n << ' '<< req << endl;
        }
        cout << "result: " << req << endl;
    }

    return 0;
}