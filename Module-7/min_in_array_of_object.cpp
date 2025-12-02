#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    // Student ashik;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].name << ' ' << a[i].roll << ' ' << a[i].marks << endl;
    // }

    Student minimum;
    minimum.marks = INT_MAX;

    // int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minimum.marks = min(a[i].marks, minimum.marks);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks == minimum.marks)
        {
            minimum = a[i];
        }
    }

    cout << minimum.name << ' ' << minimum.roll << ' ' << minimum.marks << endl;

    return 0;
}