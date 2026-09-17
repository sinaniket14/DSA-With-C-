#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows :";
    cin>>m;
    int n;
    cout<<"Enter number of columns :";
    cin>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
           if(i==0 || j==0 || j==n-1 || i==m-1) cout<<"*";
           else cout<<" ";
        }
        cout<<endl;
    }
}