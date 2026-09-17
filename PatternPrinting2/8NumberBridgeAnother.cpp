#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number lines :";
    cin>>n;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp+=2;
        for(int k=4+i;k<=2*n-1;k++){
            cout<<k;
        }
        cout<<endl;
    }
}
