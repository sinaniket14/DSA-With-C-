#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,56,6,7,8,9};
    int temp=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>temp) temp=arr[i][j];
        }
    }
     cout<<"The largest element is :"<<temp;
}