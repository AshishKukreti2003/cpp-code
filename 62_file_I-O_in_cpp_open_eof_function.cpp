#include<iostream>
#include<fstream>
// #include<string>
using namespace std;

int main(){
    // ofstream out;
    // out.open("sample_60-a.txt");
    // out<<"This is me"<<endl; 
    // out<<"Ashish Kukreti";  
    // out.close();

    ifstream in;
    string st, st2;
    in.open("Sample_60-a.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    in.close();

    return 0;
}