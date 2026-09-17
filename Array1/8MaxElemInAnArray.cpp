#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i]; 
    }
    int max=arr[0];// max=INT_MIN; integer ki min value se compare krega
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max) max=arr[i];
    }
     cout<<"Maximum element is : "<<max;
}