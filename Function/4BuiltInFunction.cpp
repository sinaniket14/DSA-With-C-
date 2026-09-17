#include<iostream>
using namespace std;
int mini(int a,int b){
   int t;
   if(a<b) t=a;
   else t=b;;
    return t;
}
int main(){
    int a,b;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<mini(a,b);
}