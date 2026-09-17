#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m["Aniket"] = 9002;
    m["Rajnish"] = 9004;
    m["Prabhat"] = 9006;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("Prabhat");
    m.erase("Rajnish");
    cout<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}