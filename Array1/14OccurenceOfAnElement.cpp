#include<iostream>
using namespace std;
int main(){
    int arr[]={12,65,14,12,12};
    int x=12;
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]==x) count++;
    }
    cout<<count;
}