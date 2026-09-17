#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an  array :"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
            flag=true;   
            cout<<"Duplicates is : "<<arr[i];
            break;
            }
        }
    }
    if(flag==false) cout<<"No duplicates elements are found";
}