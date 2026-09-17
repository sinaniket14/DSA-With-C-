#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=4;
    for(int i=4;i<=3*n+1;i=i+3){
        cout<<i<<",";
    }
    cout<<endl;
    //Another method
    int b;
    cout<<"Enter a number :";
    cin>>b;
    int x=4;
    for(int i=1;i<=b;i++){
        cout<<x<<",";
        x=x+3;
    }
    
}