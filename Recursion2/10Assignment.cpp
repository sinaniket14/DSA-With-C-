#include<iostream>
#include<vector>
using namespace std;
int printidx(vector<int>&v,int x,int idx){
    if(v.size()==0){
        return 0;
    }
    if(v[idx]==x){
        return 1;
    }
    else if(v[idx]!=0){
        printidx(v,x,idx+1);
    }
    else return -1;
}
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter elements to be searched :";
    cin>>x;
    int a=printidx(v,x,0);
    cout<<a;
    
}