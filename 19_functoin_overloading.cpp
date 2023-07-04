#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"Using function with three arguments"<<endl;
    return a+b+c;
}

double volume(double r, int h){
    return (3.14*r*r*h);

}

int volume(int a){
    return a*a*a;
}

int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of 3 and 6 is: "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 and 7 is: "<<sum(3,6,7)<<endl;
    cout<<"The volume of cuboid of 3, and 6 is: "<<volume(3,6)<<endl;
    cout<<"The volume of cube of 3 is: "<<volume(3)<<endl;
    cout<<"The volume of cuboid of 3, 6 and 7 is: "<<volume(3,6,7)<<endl;
    
    return 0;
}