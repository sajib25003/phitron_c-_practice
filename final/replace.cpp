#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string a, b;
        ss >> a >> b;
        size_t idx = a.find(b);
        while (idx != string::npos)
        {
            a.replace(idx, b.size(), "#");
            idx = a.find(b, idx + 1);
        }
        cout << a << endl;
    }

    return 0;
}