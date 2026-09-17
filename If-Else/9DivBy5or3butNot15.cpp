#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number :";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){
      if(n%15!=0){
        cout<<"Yes Divisible by 5 or 3 but not by 15";
      }
      else{
        cout<<"Not matching condition";
      }
    }
    else{
        cout<<"Not divisible by 5 or 3";
    }
    return 0;
}