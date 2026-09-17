#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(n-r)); // here fact(n),fact(r),fact(n-r) auto calling
    return ncr;
}
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
    return npr;
}
int main(){
     int n;
    cout<<"Enter value of n :";
    cin>>n;
     int r;
    cout<<"Enter value of r :";
    cin>>r;
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<ncr<<endl;
    cout<<npr;
}