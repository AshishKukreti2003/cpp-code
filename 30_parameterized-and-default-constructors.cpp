// // Example 01
// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
   
//     Complex(int, int ); // constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is: " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(int x , int y) // This is a parameterized constructor(as it takes 2 parameters)
// {
//     a = x;
//     b = y;
// }

// int main()
// {
//     // Implicit call
//     Complex a(4,6);
//     a.printNumber();

//     // Explicit call
//     Complex b = Complex(5,7);
//     b.printNumber();

//     return 0;
// }

// Example 02
#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x,y;
    friend void distance(point, point);
    public:
        point(int a, int b){
            x = a;
            y = b;
        }

        void display(void){
            cout<<"The point is: "<<x<<" , "<<y<<endl;
        }
};

void distance(point p1, point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    cout<<"The distance b/w these two points is: "<<sqrt(pow(x_diff, 2)+ pow(y_diff, 2))<<" units."<<endl;
}

int main(){
    point p1(3,4);
    p1.display();
    
    point p2(4,3);
    p2.display();
    
    distance(p1, p2);

    return 0;
}