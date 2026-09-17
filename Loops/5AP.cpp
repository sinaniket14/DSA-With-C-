#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";    //n=6
    cin>>n;                      // 1,3,5,7,9,11
    for(int i=1;i<=2*n-1;i=i+2){  //an=a+(n-1)d
      cout<<i<<",";               // an=1+(n-1)2
    }                             // an=2n-1 = 2*n-1
}