#include<iostream>
using namespace std;
int main() {
int arr[5]={2,2,1,1,20};
int res=0;
for(int i=0;i<5;i++){
    res = res ^ arr[i];
}
cout<<res;
}