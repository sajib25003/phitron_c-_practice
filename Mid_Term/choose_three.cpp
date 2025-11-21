#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        // for (int j = 0; j < n; j++)
        // {
        //     cout << a[j] << ' ';
        // }
        // cout << endl;

        int check = 0;
        for (int k = 0; k < n - 2 && check == 0; k++)
        {
            int left = k + 1;
            int right = n - 1;
            while (left < right)
            {
                int sum = a[k] + a[left] + a[right];
                if (sum == s)
                {
                    check = 1;
                    break;
                }
                else if (sum < s)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        cout << (check == 1 ? "YES" : "NO") << endl;
    }

    return 0;
}