#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    int n=v1.size();
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            int temp=v1[i];
            v1[i]=v1[j];
            v1[j] = temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
}