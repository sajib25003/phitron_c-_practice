#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    // cin >> s;
    getline(cin, s);
    sort(s.begin(), s.end()); // sort using ASCII value, capital age then small letters
    cout << s << endl;

    return 0;
}