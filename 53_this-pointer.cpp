#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A & setData(float a)
    void setData(float a)
    {
        this->a = a;
        // return *this;
    }
    void getData(void)
    {
        cout << "The value of a is: " << a << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which to the object which invokes the member function
    A a;
    a.setData(4);
    a.getData();

    return 0;
}