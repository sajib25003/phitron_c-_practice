#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // m8 byte
};

int main()
{

        Student a,b;
        cin.getline(a.name, 100);
        cin >> a.roll >> a.gpa;
        cin.ignore();
        cin.getline(b.name, 100);
        cin >> b.roll >> b.gpa;


        cout << a.name << ' ' << a.roll << ' ' << a.gpa << endl;
        cout << b.name << ' ' << b.roll << ' ' << b.gpa << endl;

    // char temp[100] = "Ashik";
    // // a.name = "Ashik"; // not possible for array string
    // strcpy(a.name, temp);
    // a.roll = 3;
    // a.gpa = 3.05;

    return 0;
}