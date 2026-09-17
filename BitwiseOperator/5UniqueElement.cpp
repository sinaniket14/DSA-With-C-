#include<iostream>
using namespace std;
int main(){
        int arr[]= {1,2,3,1,2,12,3,4,4};
        int n=9;
        int res=0;
        for(int i=0; i<n; i++){
            res = res ^ arr[i];
        }
        cout<<res;
}