#include<iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };

// OR

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main(){
    struct employee op;
    // OR // ep op;
    ep hmm;
    op.eId = 1;
    op.favChar = 'a';
    op.salary = 100;
    cout<<"The value is: "<<op.eId<<endl;
    cout<<"The value is: "<<op.favChar<<endl;
    cout<<"The value is: "<<op.salary<<endl;
    cout<<endl;
    union money m1;
    m1.rice = 40;
    m1.car = 'c';
    cout<<"The vale is: "<<m1.rice<<endl; //because the use of m1.car, the m1.rice gives the garbage value.
    cout<<endl;
    enum Meal{Breakfast, Lunch, Dinner};
    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;
    cout<<endl;
    Meal a1 = Lunch;
    cout<<a1;
    
    return 0;
}