#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>x){
            cout<<2*(y-x);
        }
        else{
            cout<<y;
        }
    }

    return 0;
}