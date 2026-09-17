#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    int target = 40;
    if(s.find(target)!=s.end()){
        cout<<"Exits"<<endl;
    }
    else cout<<"Does not exists"<<endl;
    cout<<endl;
    for(int x : s){
        cout<<x<<" ";
    }
}