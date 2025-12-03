#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student std1, Student std2)
{
    if (std1.eng_marks > std2.eng_marks)
    {
        return true;
    }
    else if (std1.eng_marks < std2.eng_marks)
    {
        return false;
    }
    else
    {
        if (std1.math_marks > std2.math_marks)
        {
            return true;
        }
        else if (std1.math_marks < std2.math_marks)
        {
            return false;
        } else {
            return std1.id < std2.id;
        }
    }

    // if (total_std1 == total_std2)
    // {
    //     return std1.id < std2.id;
    // }
    // else
    // {
    //     return (std1.eng_marks == std2.eng_marks ? std1.math_marks > std2.math_marks : std1.eng_marks > std2.eng_marks);
    // }
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << ' ' << a[i].cls << ' ' << a[i].s << ' ' << a[i].id << ' ' << a[i].math_marks << ' ' << a[i].eng_marks << endl;
    }

    return 0;
}