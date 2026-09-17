#include<iostream>
using namespace std;
void OddNumber(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
int main(){
  int a,b;
  cout<<"Enter first number :";
  cin>>a;
   cout<<"Enter second number :";
   cin>>b;
   OddNumber(a,b);
}