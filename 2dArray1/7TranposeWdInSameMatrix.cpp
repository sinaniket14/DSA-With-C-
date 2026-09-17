#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements of an array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
     cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();        // number of rows
        int n = matrix[0].size();     // number of cols

        // result matrix with swapped dimensions
        vector<vector<int>> result(n, vector<int>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }
};