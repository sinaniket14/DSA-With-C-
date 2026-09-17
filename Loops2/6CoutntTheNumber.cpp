#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter a number :";
    cin>>n;
    count=0;
    int a=n; //For 0 because we give 0 then output will be 1
    while(n>0){
        n=n/10;
        count++;
    }
    if(a==0) cout<<1;
     else cout<<count;
}
