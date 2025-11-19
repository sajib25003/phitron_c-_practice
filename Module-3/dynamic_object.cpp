#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student* ashik = new Student(36, 23, 3.57);
    return ashik;
}

int main()
{

    Student *sajib = new Student(26, 13, 3.05);
    Student* ashik = fun();

    cout << sajib->roll << ' ' << sajib->cls << ' ' << sajib->gpa << endl;
    cout << ashik->roll << ' ' << ashik->cls << ' ' << ashik->gpa << endl;

    return 0;
}