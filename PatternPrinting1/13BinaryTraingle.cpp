#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=5;
    for(int i=1;i<=n;i++){
        if(a%2!=0) a=1; // row no.odd
           else a=0;    // row no even
        for(int j=1;j<=i;j++){
         cout<<a;
         //Flipping
         if(a==1) a=0;
         else a=1;
    }
    cout<<endl;
}
}