#include<iostream>
#include<math.h>   
using namespace std;

class SimpleCalculator{
    float a, b;
    public:
    void getDataSimple(){
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    }
    void getResultSimple(){
        cout<<"The value of a+b is: "<<a+b<<endl;
        cout<<"The value of a-b is: "<<a-b<<endl;
        cout<<"The value of a*b is: "<<a*b<<endl;
        cout<<"The value of a/b is: "<<a/b<<endl;
    }
};

class ScientificCalculator{
    int a,b;
    public:
    void getDataScientific(){
        cout<<"Enter the first number: "<<endl;
        cin>>a;
        cout<<"Enter the second number: "<<endl;
        cin>>b;
    }
    void getResultScientific(){
        cout<<"The value of cos(a) is: "<<cos(a)<<endl;
        cout<<"The value of sin(a) is: "<<sin(a)<<endl;
        cout<<"The value of exp(a) is: "<<exp(a)<<endl;
        cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        cout<<"The value of cos(b) is: "<<cos(b)<<endl;
        cout<<"The value of sin(b) is: "<<sin(b)<<endl;
        cout<<"The value of exp(b) is: "<<exp(b)<<endl;
        cout<<"The value of tan(b) is: "<<tan(b)<<endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};
int main(){
    HybridCalculator hc;
    hc.getDataSimple();
    hc.getResultSimple();
    hc.getDataScientific();
    hc.getResultScientific();

    return 0;
}