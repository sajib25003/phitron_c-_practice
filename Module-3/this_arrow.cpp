#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, int gpa)
    {
        // class er vitor thake, return property thake na, class er same name e hoy
        // eita hocche ekta constructor

        // (*this).roll = roll;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        // this refers to object name and right side refers to value
        // arrow indicates the point as pointer sign. dot is for destructure. after destructure it turns to ->
    }
};

int main()
{

    Student ashik(12837, 12, 5);
    Student sajib(26, 13, 3.05);

    // input nile constructor use kore laav hoy na. in that case manually korlei hoy
    // age input niye pore constructor e diye dile kaaj kore but laav nai

    // constructor thakle constructor call kora must

    cout << ashik.roll << ' ' << ashik.cls << ' ' << ashik.gpa << endl;
    cout << sajib.roll << ' ' << sajib.cls << ' ' << sajib.gpa << endl;

    return 0;
}