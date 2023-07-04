#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;// list pf zero lenght
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    display(list1);
    // removing elements form the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(7);
    // display(list1);

    // sorting the list
    // list1.sort();
    // display(list1);


    list<int> list2(3); // empty list of size 7
    list<int> :: iterator iter; 
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"List1 After merging: ";
    // display(list1);

    list1.reverse();
    display(list1);
    
    return 0;
}