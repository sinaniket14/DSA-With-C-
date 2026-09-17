#include<iostream>
using namespace std;
int main(){
    for(int i=100;i>0;i=i-3){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<endl;

    int a=100;
    for(int i=100;a>0;i=i++){
        cout<<a<<",";
          a=a-3;
    }
}