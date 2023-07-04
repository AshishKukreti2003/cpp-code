#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array
int main(){
    map<string,int> marksMap;
    marksMap["Ashish"] = 79;
    marksMap["Vinamra"] = 98;
    marksMap["Tushar"] = 99;

    marksMap.insert({{"Anuj",99},{"Harsh",99}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return is: "<<marksMap.empty()<<endl;

    return 0;
}