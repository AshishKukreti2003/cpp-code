/* control structure
 1.Sequence structure
 2.Selection structure
 3.Loop structure
 All are basic control structure
*/

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;
    // selsection control structure:If else-if else lader
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party "<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are kid and you will get a kid pass to the party "<<endl;    
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }

    // selection control structure: Switch case statements
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    
    case 22:
        cout<<"You are 22"<<endl;
        break;

    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"done!!"<<endl;


    return 0;
}