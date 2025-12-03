#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string b = "Jessica";
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool flag = false;
    while (ss >> word){
        if (word == b){
            flag = true;
            break;
        } 
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    // // cout << s;

    return 0;
}