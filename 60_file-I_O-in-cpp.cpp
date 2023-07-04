#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream -> derived from fstreambase
3. ofstream -> derived from fstreambase
*/

/*
In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a flie:
1. Using the constructor
2. Using the member function open() of the class
*/

int main(){
    string st = "op bro!!";
    string st2;
    // opening files using constructor and writing it
    // ofstream out("sample_60-a.txt"); // write operation
    // out<<st; // writes to a flie sample_60-a.txt

    // opening files using constructor and reading it
    ifstream in("sample_60-b.txt"); // write operation
    // in>>st2; //it will only show first word
    getline(in, st2);
    cout<<st2; 

    return 0;
}