#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for (int i = 0; i < n - 1; i++) {
    // Inner loop for comparisons
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                //swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}