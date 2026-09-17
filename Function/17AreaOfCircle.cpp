#include<iostream>
using namespace std;
float AreaOfCircle(float radius){
    float pi=3.1415;
    return pi*radius*radius;
}
int main(){
   float radius;
   cout<<"Enter radius :";
   cin>>radius;
   AreaOfCircle(radius);
   cout<<AreaOfCircle(radius);
}