#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class syntax
/*
class {{derives-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc..
}

Note:
1. Default visibility mode is private.
2.Public visibility mode: Public members of the base class becomes publi members of the derived class
3.Private visibility mode: Public members of the base class becomes private members of the derived class.
4. private members are never inherited
*/

// creating a programmer class derived from Employee Base Class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(5);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}