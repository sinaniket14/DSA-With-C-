#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,1,2,3,9};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minIdx=-1;
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            minIdx=j;
        }
    }
    swap(arr[i],arr[minIdx]);
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}