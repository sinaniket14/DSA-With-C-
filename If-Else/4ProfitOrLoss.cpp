#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Cost Price :"<<endl;
    int cp;
    cin>>cp;

    cout<<"Enter Selling price :"<<endl;
     int sp;
    cin>>sp;

    if(sp>cp){
        cout<<"profit="<<sp-cp<<endl;
    }
    if(cp>sp){
        cout<<"Loss="<<cp-sp<<endl;
    }
    if(sp==cp){ // we can also use else here
        cout<<"No profit No loss";
    }
    
    return 0;
}