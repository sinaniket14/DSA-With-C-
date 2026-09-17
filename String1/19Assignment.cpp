#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;  
    
}