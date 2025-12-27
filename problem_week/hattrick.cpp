#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int k = 0; k < t; k++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);

        bool flag = false;

        char a[6];
        for (int i = 0; i < 6; i++)
        {
            ss >> a[i];
        }

        for (int i = 0; i <= 3; i++)
        {
            // cout << a[i] << ' ';

            if (a[i] == 'W' && a[i + 1] == 'W' && a[i + 2] == 'W')
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}