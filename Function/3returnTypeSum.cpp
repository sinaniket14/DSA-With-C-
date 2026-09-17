#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    int x=sum(a,b);
    cout<<x;
}