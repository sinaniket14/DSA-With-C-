#include<iostream>
using namespace std;
int stairPath(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    if(n==3) return 4;
    return stairPath(n-1)+stairPath(n-2)+stairPath(n-3);
}
int main(){
    cout<<stairPath(4);
}