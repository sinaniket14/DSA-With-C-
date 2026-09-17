#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<",";
        a=a+2;
    }
    
    cout<<endl;

    // int b;
    // cout<<"Enter a number :";
    // cin>>b;
    // int c=4;
    // for(int i=1;i<=b;i++){
    //     cout<<c<<",";
    //     c=c+3;
    // }
}