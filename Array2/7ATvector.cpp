#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(6);
v.push_back(9);
v.push_back(4);
v.push_back(3);
v.at(2)=14; // update using at
cout<<v.at(2);
}