#include<iostream>
using namespace std;
class Loading{
    public:
    void sum(string a,string b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    // int sum(int a,int b){
    //     return a+b;
    // }  not same return type
};
int main(){
    Loading a;
    a.sum(14,21);
    a.sum(14,21,35);
    a.sum("Aniket","Singh");
}