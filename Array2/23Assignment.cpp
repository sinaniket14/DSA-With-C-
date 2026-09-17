#include<iostream>
using namespace std;
void isPalindrome(int n,int arr[]){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]) {
            cout<<"Yes array is palindrome :";
            break;
        }
        else {
            cout<<"Array is not palindrome";
            break;
        }
        i++;
        j--;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[5];
    cout<<"Enter elements of an array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    isPalindrome(n,arr);
}