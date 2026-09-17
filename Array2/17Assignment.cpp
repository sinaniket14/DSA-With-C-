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
    int a;
    cout<<"Enter target element :";
    cin>>a;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>a){
        count++; 
        cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Total number of element is greater than the a is : "<<count;

}