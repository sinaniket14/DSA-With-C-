#include<iostream>
using namespace std;
int main(){
    int n,count,t;
    cout<<"Enter a number :";
    cin>>n;
    int rev=0;
    int lastdigit=0;
    while(n>0){
         rev=rev*10;
        lastdigit=n%10;
        rev=(rev+lastdigit);
        n/=10;
    }
     cout<<rev;
}