#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    // cout << n;
    for (int j = 0; j < n; j++)
    {
        // cout << j << endl;
        string s;
        getline(cin, s);
        // cout << s << endl;
        string a, b;
        stringstream ss(s);
        ss >> a;
        ss >> b;
        // cout << a << endl;
        // cout << b << endl;
        if (a.size() == b.size())
        {
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << b[i];
            }
        }
        else if (a.size() < b.size())
        {
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << b[i];
            }
            for (int i = a.size(); i < b.size(); i++)
            {
                cout << b[i];
            }
        }
        else if (a.size() > b.size())
        {
            for (int i = 0; i < b.size(); i++)
            {
                cout << a[i] << b[i];
            }
            for (int i = b.size(); i < a.size(); i++)
            {
                cout << a[i];
            }
        }

        cout << endl;
    }

    return 0;
}