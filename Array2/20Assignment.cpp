#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,13,14,15,16};
   // bool flag=false;
    for(int i=1;i<5;i++){
        for(int j=i+1;i<5;j++){
            if(arr[i]<arr[j]){
                cout<<"Array is sorted";
                return 0;
            }
            else cout<<"Array is not sorted";
            return 0;
        }
         //for(int i=1;i<5;i++){
        //  if(arr[i-1]>arr[i]){
        //  }
         //}
    }
}