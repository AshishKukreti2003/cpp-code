#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // constant in C++
    // const int a = 3;
    // cout<<"The value is: "<<a;
    // a = 56;// error 
    // cout<<"The value is: "<<a; //error

    // manipulator
    // int a=1, b=12, c= 123;
    // cout<<"The value of a without setw is: "<<a<<endl; 
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;

    // operator percedence
    int a= 3, b=4;
    int c=a*5+b-45+87;
    int d=((((a*5)+b)-45)+87);
    cout<<c<<endl;
    cout<<d<<endl;


    return 0;
}