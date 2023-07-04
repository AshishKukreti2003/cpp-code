#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23,45,56,89};
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    marks[2]= 100 ; //you can change the value of array
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // or 
    cout<<"These are mathMarks"<<endl;
    int mathMarks[4];
    mathMarks[0]=234;
    mathMarks[1]=267;
    mathMarks[2]=289;
    mathMarks[3]=212;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // using for loop
    cout<<"Using for loop"<<endl;
    for(int i = 0; i < 4; i++){
        cout<<"The value of marks: "<<marks[i]<<endl;
    }

    // using while loop
    cout<<"Using while loop"<<endl;
    int i = 0;
    while(i<4){
        cout<<"The value of marks: "<<marks[i]<<endl;
        i++;
    }

    // using do while loop
    cout<<"Using do while loop"<<endl;
    int n = 0;
    do{
        cout<<"The value of marks: "<<marks[n]<<endl;
        n++;
    }while(n<4);

/*pointer arithmethic
address(new) = address(current)+i*Sizeof(data types)
*/
    cout<<"pointers and array"<<endl;
    int*p = marks;
    cout<<"The value of marks is: "<<*p<<endl;
    cout<<"The value of marks is: "<<*(p+1)<<endl;
    cout<<"The value of marks is: "<<*(p+2)<<endl;
    cout<<"The value of marks is: "<<*(p+3)<<endl;
    cout<<endl;
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*p<<endl;
    return 0;
}