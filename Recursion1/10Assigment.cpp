#include<iostream>
using namespace std;
int sumcount(int a,int b){
    if(a>b){
        return 0;
    }
    if(a%2!=0){
        return a+sumcount(a+1,b);
    }
     else return sumcount(a+1,b);
    
}
int main(){
    int a;
    cout<<"Enter first number :";
    cin>>a;
    int b;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<sumcount(a,b);
}