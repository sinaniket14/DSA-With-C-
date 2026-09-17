#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void end01(int i,int j,vector<int>&v){
    while(i<=j){
        if(v[i]>0) i++;
        if(v[j]<0) j--;
        if(i>j) break;
        if (v[i]<0 && v[j]>0){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        }
    }
    
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(-7);
    v.push_back(-5);
    v.push_back(11);
    v.push_back(6);
    display(v);
    end01(0,v.size()-1,v);
    display(v);
}