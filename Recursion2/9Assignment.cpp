#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse(vector<int>&v,int start,int last){
   if(start>=last){
    return;
   }
  swap(v[start],v[last]);
  reverse(v,start+1,last-1);
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    reverse(v,0,n-1);
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
  }

}