#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"0123","101","102","904","2409","789"};
    int max =stoi(arr[0]);
    string maxS = arr[0];
    for(int i=0;i<6;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
        }
    }
    cout<<maxS;
}
