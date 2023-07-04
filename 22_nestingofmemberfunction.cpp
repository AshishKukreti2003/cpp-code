#include <iostream>
#include <string>
using namespace std;

//  oops - classes and object

// c++ --> initially called --> C with classes by stroustroup
//  class--> extension of structures (in C)
// structures had limitations:
// 1. members are public
// 2. no methods
// classes --> structure + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structure in c++ are typedef
// you can declare object along with the class declarion

// Nesting of member function
class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}


void binary ::display(void)
{
    cout <<"Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); 
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}