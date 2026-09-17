#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(6);
cout<<v.capacity()<<endl; // v.size();
v.push_back(9);
cout<<v.capacity()<<endl; // v.size();
v.push_back(4);
cout<<v.capacity()<<endl; // v.size();
v.push_back(3);
cout<<v.capacity()<<endl; // v.size();
cout<<endl;
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
}