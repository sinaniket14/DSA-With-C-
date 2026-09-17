#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort012(vector<int>&v){
     int noz=0;
     int no1=0;
     int no2=0;
     for(int i=0;i<=v.size()-1;i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) no1++;
        else no2++;
     }
     for(int i=0;i<=v.size()-1;i++){
        if(i<noz) v[i]=0;
        else if(i<(no1+noz)) v[i]=1;
        else v[i]=2;
    }
     return;
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    display(v);
    sort012(v);
    display(v);
}