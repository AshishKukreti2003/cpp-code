#include<iostream>
using namespace std;


int sum(int a, int b){
    int c = a+b;
    return c; 

}
// this will not swap a and b
int swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}
// call by reference using pointers
// int swapPointer(int*a, int*b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }

// call by reference using C++ reference variables
void swapReferenceVar(int&a, int&b){ // void-->int& for change in main function
    int temp = a;
    a=b;
    b=temp;
    // return a;
}


int main(){
    int x = 4, y = 5;
    cout<<"The sum of 4 and 5: "<<sum(x,y)<<endl;
    cout<<"The vale of x is: "<<x<<" and the value of y is: "<<y<<endl;
    // swap(x,y);//This will not swap a and b
    // swapPointer(&x, &y); //this will swap a and b using pointer reference
    swapReferenceVar(x, y); //this will swap a and b using reference variables
    // swapReferenceVar(x, y) = 767; //this will swap a and b using reference variables
    cout<<"The vale of x is: "<<x<<" and the value of y is: "<<y<<endl;
    return 0;
}