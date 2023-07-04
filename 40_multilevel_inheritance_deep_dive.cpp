#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float p1)
{
    maths = m1;
    physics = p1;
}

void Exam ::get_marks()
{
    cout << "The marks obtanied in maths are:" << maths << endl;
    cout << "The marks obtanied in physics are:" << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    If we are inheriting B from A and C from B:[A-->B-->C]
    1. A is the base class for B and B is the base class for C
    2.A-->B-->C is called inheritance path
    */
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(99.9, 98);
    harry.display_result();

    return 0;
}