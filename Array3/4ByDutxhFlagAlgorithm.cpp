#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v[mid]==2){
        int temp=v[mid];
        v[mid]=v[high];
        v[high]=temp;
        high--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }
        else mid++;
    }
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}
