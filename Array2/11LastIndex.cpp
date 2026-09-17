#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(9);
    v.push_back(4);
    v.push_back(3);
    v.push_back(78);
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);
    int x=9;
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx=i;
    // }
    // cout<<idx;

    // ulta loop
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;
}