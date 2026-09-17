#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    if(x>=0){
        cout<<x;
    }
    else{
        cout<<-x;
    }
    //OUtput to positive milega pr dabbe me -integer hi rahega use positive karo
    if(x<0){
       x=-x;
    }
    else{
        cout<<x;
    }
    return 0;
}