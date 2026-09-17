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
    int max=INT_MIN;// max=INT_MIN; integer ki min value se compare krega
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i]; 
    }
     cout<<"Maximum element is : "<<max<<endl;
     int smax=INT_MIN;
     for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
     }
    cout<<" Second Maximum element is : "<<smax<<endl;
    int tmax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i] != max && arr[i] != smax && tmax < arr[i]) tmax = arr[i];
    }
    cout<<" third Maximum element is : "<<tmax<<endl;
}