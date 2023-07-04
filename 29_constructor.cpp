#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    //  creating a constructor
    //  Constructor is a special member with the same name as of the class.
    // It is automatically invoked whenever the objects of its class.
    //  It is used to initialize the objects of its class

    Complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // This is a default constructor(as it accepts no parameters)
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}

/*
properties of constructor
1. it should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/