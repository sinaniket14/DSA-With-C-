#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&a){
    a[0]=100;
    for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}//No need to create extra array like previous problem
int main(){
vector<int> v;
v.push_back(6);
v.push_back(9);
v.push_back(4);
v.push_back(3);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
change(v);
}