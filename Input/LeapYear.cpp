#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year :";
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<year <<"is the leap year"<<endl;
    }
    else{
        cout<<year <<"Not a leap year"<<endl;
    }
}