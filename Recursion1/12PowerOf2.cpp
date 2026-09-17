#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int PowOf2(int n){
    int ans=0;
     for(int i=1;i<=31;i++){
        ans=pow(2,i);
        if(ans==n) return true;   
     }
      return false;
 }
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<PowOf2(n);
}