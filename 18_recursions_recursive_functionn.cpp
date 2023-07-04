#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}
int main(){
    //  factorial of a number:
    // 6! = 6*5*4*3*2*1=720
    // n!=n*(n-1)!
    // int a;
    // cout<<"Enter a number: "<<endl;
    // cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;


    // fibonacci series
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The term in Fibonacci series at position "<<a<<" is : "<<fibonacci(a)<<endl;
    return 0;
}