#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connnecting our file with hout stream
    // ofstream hout("sample_60-a.txt");

    // // creating a name string and filling it with string entered by the user
    // cout<<"Enter your name: "<<endl;
    // string name;
    // cin>>name;
    // // writing a string to the file
    // hout<<"My name is: "+ name;
    // hout.close();

    ifstream hin("sample_60-a.txt");
    string content;
    hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    // hin.close();

    return 0;
}