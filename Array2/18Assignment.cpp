#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int smax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=smax && arr[i]<max) smax=arr[i];
    }
    int Tmax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=Tmax && arr[i]<smax) Tmax=arr[i];
    }
    cout<<endl;
    cout<<Tmax<<","<<smax<<","<<max;
    
}