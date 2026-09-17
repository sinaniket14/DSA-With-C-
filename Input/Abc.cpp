#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter radius :";
    cin>>r;
    float pi=3.1415;
    float area=pi*r*r;
    cout<<area<<endl;
    float circ=2*pi*r;
    cout<<circ<<endl;
    if(area==circ){
        cout<<"Area and Circ are equal";
    }
    else if(area>circ){
        cout<<"Area is  greater than the circumferance";
    }
    else{
      cout<<"Area is not  greater than the circumferance";   
    }
    
}