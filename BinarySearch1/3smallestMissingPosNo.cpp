#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,3,4,5,8,10};
    int low=0;
    int n=7;
    int high=n-1;
    int ans=-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid) low = low+1;
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;
}