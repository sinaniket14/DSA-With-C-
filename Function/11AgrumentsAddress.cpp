#include<iostream>
using namespace std;
void fun(int x, int y){ //Formal Parameters
        cout<<&x<<endl; 
        cout<<&y<<endl;
    }
int main(){
    int x=3;
    int y=3;
    cout<<&x<<endl;
     cout<<&y<<endl;
     fun(x,y); //Actual Parameters
}