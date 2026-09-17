#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v(5,7); // initial size=5 and each elements value is 7
cout<<v[4]<<endl;
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
}