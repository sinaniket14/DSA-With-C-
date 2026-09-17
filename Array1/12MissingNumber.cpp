#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an  array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]!=x){
            cout<<"Missing elements is : "<<x<<endl;
            flag=true;
            break;
        }
        else x++;
    }
    if(flag==false) cout<<"No such missing elements";
    return 0;
} // 2nd method efficient 

// int n=nums.size();
//         int actualSum=n*(n+1)/2;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum += nums[i];
//         }
//         return actualSum-sum;

 // 3rd md using cycle sort
 
// int n = nums.size();
        // int i=0;
        // while(i<n){
        //     int correctIdx=nums[i];
        //     if(i==correctIdx || nums[i]==n) i++;
        //     else swap(nums[i],nums[correctIdx]);
        // }
        // for(int i=0; i<n;i++) {
        //     if(nums[i]!=i) {
        //     return i; // Found the missing number
        //     }
        // }
        // return n;
