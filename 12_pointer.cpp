#include<iostream>
using namespace std;

int main(){
    // what is a pointer?  it is a data type which holds the address the other data types

    int a =3;
    int * b = &a;
    // & --> (Address of) operator
    cout<<"The address of a: "<<b<<endl;
    cout<<"The address of a: "<<&a<<endl;

    // * --> Dereference operator
    cout<<"The vale of address of b is: "<<*b<<endl;

    // pointer to pointer
    int**c = &b;
    cout<<"The value of b is: "<<&b<<endl;
    cout<<"The value of b is: "<<c<<endl;
    cout<<"THe value at address c is: "<<*c<<endl;
    cout<<"The vale at address vale_at(vale_at(c)) is: "<<**c<<endl;
    return 0;
}