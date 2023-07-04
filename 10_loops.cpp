#include<iostream>
using namespace std;
int main(){

    /* Loops in c++
    1.For loop
    2. while loop
    3. do-While loop
    */
    
    // for loop
    /*Syntax of for loop
        for(initialization; condition; updation);
        {
            loop body(C++ code);
        }
    */

    // for(int i = 0; i<4 ; i++){
    //     cout<<i<<endl;
        
    // }

    // Example of infinite for loop
    // for(int i = 1; 34<40; i++){
    //     cout<<i<<endl;
    // }

    // while loop
    // syntax:
    // while(condition)
    // {
    //     c++ statements;
    // }

    // printing 1 to 40 using while loop
    // int i =1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++ ;
    // }
    
    // example of infinite while loop
    // int i =1;
    // while(true){
    //     cout<<i<<endl;
    //     i++; 
    // }

    // do-while loop
    // Syntax:
    // do{
    //      c++ statements;
    //    }while(condition);
    
    // printing 1 to 40 using do while loop
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);

    //  multiplication table 
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for(int i = 1; i<=10; i++){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    
    return 0;
}