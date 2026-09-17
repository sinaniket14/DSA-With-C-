#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size){
       b[2]=100;
       return;
    }
int main(){
    int arr[]={12,13,14,15,16};
    int size=sizeof(arr)/sizeof(arr[2]);
    display(arr,size);
    change(arr,size);
    display(arr,size);
}
