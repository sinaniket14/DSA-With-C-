#include<iostream>
#include<vector>
using namespace std;
void remove(vector<int>&t,vector<int>&v,int idx){
    if(idx==v.size()){
        for(int i=0;i<t.size();i++){
            cout<<t[i]<<" ";
        }
        //TCS 15 march
    }
    int n=v[idx];
    if(n==2) remove(t,v,idx+1);
    else{
        t.push_back(n);
        remove(t,v,idx+1);
    }
}
int main(){
int n;
cout<<"Enter the size : ";
cin>>n;
vector<int>v(n);
for(int i=0;i<v.size();i++){
    cin>>v[i];
}
vector<int>t;
remove(t,v,0);
}