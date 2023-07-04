#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a+b;
//     return c;

// }

// function prototype
// type function-name(arguments);
// int sum(int a, int b); //-->Acceptable
// int sum(int a, b); //-->not Acceptable
int sum(int, int); //-->Acceptable
// void g(void); // -->Acceptable
void g();

int main(){
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    // num1 and num2 are actula parameters
    cout<<"The sum is: "<<sum(num1,num2)<<endl;
    g();
    return 0;

}

int sum(int a, int b){
    // Formal paramerters a and b will be taking values form actual paramerts num1 and num2.
    int c = a+b;
    return c;

}

void g(){
    cout<<"Hello, the end of program!"<<endl;
}

   


