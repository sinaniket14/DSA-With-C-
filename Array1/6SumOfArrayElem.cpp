#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array :";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter elements of an array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
} 