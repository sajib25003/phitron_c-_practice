#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string s = "Hello";
    // 1
    // string s("Hey");
    // 2
    // string s("Hello World", 7);
    // 3
    string s = "Hello World";
    string t(s, 4);  // string name(string, start) -> works till end
    // string t(s, 0, 4);  // string name(string, start, end)
    // cout << s << endl;
    cout << t << endl;

    // string s(5, 'A'); // prints AAAAA -> s(count, char)
    // cout << s << endl;

    return 0;
}