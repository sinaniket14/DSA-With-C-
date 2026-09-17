#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector :";
    cin>>n;
    int sum=0;
    int prod=1;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=n-1;i>=0;i--){
        sum += v[i]*prod;
        prod *= 2;

    }
    cout<<sum;

}