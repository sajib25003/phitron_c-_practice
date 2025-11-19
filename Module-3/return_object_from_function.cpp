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

Student fun(){
        Student sajib(26, 13, 3.05);
        return sajib;

}

int main()
{

    Student obj = fun();

    cout << obj.roll << ' ' << obj.cls << ' ' << obj.gpa << endl;

    return 0;
}