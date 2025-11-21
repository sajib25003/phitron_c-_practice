
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char c[100001];
    // while (cin >> c)
    while (cin.getline(c, 100001))
    {
        int len = strlen(c);
        sort(c, c + len);
        for (int i = 0; i < len; i++)
        {
            if (c[i] != ' ')
            {
                cout << c[i];
            }
        }
        cout << endl;
    }

    return 0;
}