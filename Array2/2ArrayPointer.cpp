#include<iostream>
using namespace std;
int main(){
    int arr[]={12,13,14,89,56};
    int* ptr=arr;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
    *ptr=10;
    ptr++;
    *ptr=11;
    ptr--;
    cout<<endl;
     for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}