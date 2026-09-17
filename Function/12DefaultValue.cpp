#include<iostream>
using namespace std;
void fun(int x=7,int y=8){ // 7 is now default value of x
    cout<<x<<" "<<y;      // 8is default value of y           
} // default value sbko do wrna kisi ko mat do        
int main(){
    fun();
}
