#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student std1, Student std2)
{
    // ascending order sort compare using object marks
    // if (std1.marks < std2.marks)
    // descending order sort compare using object marks
    // if (std1.marks > std2.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return std1.marks >= std2.marks; // shortcut similar to JS sort
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << ' ' << a[i].roll << ' ' << a[i].marks << endl;
    }

    return 0;
}