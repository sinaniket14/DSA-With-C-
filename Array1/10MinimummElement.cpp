#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={23,15,45,20,-4};
    int min=arr[0];
    for(int i=0;i<=4;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<min;
}