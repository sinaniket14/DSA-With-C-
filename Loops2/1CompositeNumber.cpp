#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    bool flag = true;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            flag=false;
            break;
        } 
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is prime";
    else cout<<n<<" is composite";
}