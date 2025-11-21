#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin.ignore();
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin.ignore();
        cin >> c.id >> c.name >> c.section >> c.marks;

        // cout << a.id << ' ' << a.name << ' ' << a.section << ' ' << a.marks << endl;
        // cout << b.id << ' ' << b.name << ' ' << b.section << ' ' << b.marks << endl;
        // cout << a.id << ' ' << a.name << ' ' << a.section << ' ' << a.marks << endl;

        int largest_id = a.id;
        if (a.marks >= b.marks && a.marks >= c.marks)
        {
            largest_id = a.id;
        }
        else if (b.marks >= c.marks)
        {
            largest_id = b.id;
        }
        else
        {
            largest_id = c.id;
        }

        if (largest_id == 1)
        {
            cout << a.id << ' ' << a.name << ' ' << a.section << ' ' << a.marks << endl;
        }
        else if (largest_id == 2)
        {
            cout << b.id << ' ' << b.name << ' ' << b.section << ' ' << b.marks << endl;
        }
        else if (largest_id == 3)
        {
            cout << c.id << ' ' << c.name << ' ' << c.section << ' ' << c.marks << endl;
        }
    }

    return 0;
}