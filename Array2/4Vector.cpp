#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(6);
v.push_back(9);
v.push_back(4);
v.push_back(3);
v.push_back(78);
v.push_back(7);
v.push_back(5);
v.push_back(8);
v.push_back(3);
v.push_back(56);
v.push_back(79);
v.push_back(30);
cout<<"Size of vector : "<<v.size()<<endl;
cout<<"capacity of vector : "<<v.capacity()<<endl;
cout<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
cout<<"Size of vector : "<<v.size()<<endl;
cout<<"capacity of vector : "<<v.capacity()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}