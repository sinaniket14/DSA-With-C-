#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Vector : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements of vector : ";
    for(int i=0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int a;
    cout<<"Enter target element :";
    cin>>a;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;i<=n-1;j++){
            for(int k=j+1;k<=n;k++){
                if(v[i]+v[j]+v[k]==a)
                cout<<"("<<v[i]<<","<<v[j]<<","<<v[k]<<")";

            }
        }
    }
    

}