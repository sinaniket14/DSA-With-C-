#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter value of a"<<endl;
    cin>>a;

    int b;
    cout<<"Enter value of b"<<endl;
    cin>>b;

    int c;
    cout<<"Enter value of c"<<endl;
    cin>>c;

    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<","<<b<<","<<c<<" can be a side of traingle";
    }
    else{
        cout<<"Can not be side of traingle";
    }
}