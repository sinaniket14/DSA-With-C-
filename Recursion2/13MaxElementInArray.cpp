#include<iostream>
#include<climits>
using namespace std;
void display(int arr[],int n,int idx,int max){
   if(idx==n){
    cout<<max;
    return;
   }
   if(max<arr[idx]) max=arr[idx];
   display(arr,n,idx+1,max); 
}
int main(){
    int arr[]={1,2,3,23,5};
    int n=sizeof(arr)/sizeof(arr[1]);
    
    display(arr,n,0,INT_MIN);
}