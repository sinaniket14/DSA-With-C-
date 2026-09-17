#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(0);
    for(int i=0;i<=v.size()-1;i++){
        for(int j=0;j<=v.size()-1;j++){
            if(i!=j && v[i]==v[j])
            break;
        }
        if(i==v.size()-1)
        return v[i];
        cout<<v[i];
    }
}