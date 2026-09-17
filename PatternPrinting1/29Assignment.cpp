#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=1;i<=n;i++){
     for(int j=1;j<=n-i;j++){
        cout<<" ";
     }
     for(int j=1;j<=i;j++){
        cout<<"*";
     }
     cout<<endl;
    }
    n-=1;
     for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
        cout<<" ";
     }
     for(int k=1;k<=n-i+1;k++){
        cout<<"*";
     }
     cout<<endl;
    }
}