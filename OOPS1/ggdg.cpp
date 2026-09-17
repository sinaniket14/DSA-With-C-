#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int x;
     cin>>x;
     int greater=0;
     int lesser=0;
     int divisible=0;
     for(int i=0;i<n;i++){
        if(arr[i]>x) {
         greater++;
        }
        if(arr[i]<x) {
         lesser++;
        }
        if(arr[i]%x==0){
         divisible++;
        }
    }
    cout<<"Greater :"<<greater<<endl;
    cout<<"Lesser :"<<lesser<<endl;
    cout<<"Divisible :"<<divisible<<endl;
}