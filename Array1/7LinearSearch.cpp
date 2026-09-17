#include<iostream>
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
    int x;
    cout<<"Enter elements to be searched : ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<x<<" is present";
    else cout<<x<<"is not present";
}