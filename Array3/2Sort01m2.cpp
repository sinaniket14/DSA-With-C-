#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort01m2(vector<int>&v){
   int i=0;
   int j=v.size()-1;
   while(i<j){
    if(v[i]==0) i++;
    if(v[j]==1) j--;
    if(i>j) break;  // another remove this if(i>j) and makes next if to else if
    if(v[i]==1 && v[j]==0){
        v[i]=0;
        v[j]=1;
    }
   }
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    display(v);
    sort01m2(v);
    display(v);
}