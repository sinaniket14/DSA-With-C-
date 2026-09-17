#include<iostream>
using namespace std;
void product(int* ptr1,int* ptr2){
    int z;
    z=(*ptr1)*(*ptr2);
    cout<<z;
    return;
}
int main(){
    int x,y;
    cout<<"Enter first number :";
    cin>>x;
    cout<<"Enter second number :";
    cin>>y;
    int* ptr1=&x;
    int* ptr2=&y;
    product(ptr1,ptr2);
}
