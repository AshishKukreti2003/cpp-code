#include<iostream>
using namespace std;

int main(){
    //1. Arithematic operator
    int a = 5, b = 4;
    cout<<"The value of a + b is: "<<a+b<<endl;
    cout<<"The value of a - b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;

    //2. Comparison Operator
    cout<<"\n";
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;

    // Logical operator
    cout<<"\n";
    cout<<"The value of and(&&) operator (a==b) && (a<b): "<<((a==b) && (a<b))<<endl;
    cout<<"The value of or(||) operator (a==b) && (a<b): "<<((a==b) || (a>b))<<endl;
    cout<<"The value of not(!) operator !(a==b) : "<<(!(a==b))<<endl;
    


    return 0;
}