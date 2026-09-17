#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum=0;
    vector<int>v;
    for(int i=0;i<=v.size()-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
       sum+=v[i];
    }
    cout<<endl;
    int n=v.size()-1;
    int s=n*(n+1)/2;
    cout<<"Duplicates :"<<sum-s;
}