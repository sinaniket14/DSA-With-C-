#include<iostream>
using namespace std;
    void starTraingle(int x){
        for(int i=1;i<=x;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    int main(){
        starTraingle(3);
        cout<<"input 3 done";
        cout<<endl;
        starTraingle(4);
         cout<<"input 4 done";
         cout<<endl;
        starTraingle(5);
         cout<<"input 5 done";
         cout<<endl;
    }

    
