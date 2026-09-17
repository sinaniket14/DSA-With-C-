#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Transpose
    int t[n][m];
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            t[i][j]=arr[j][i];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}