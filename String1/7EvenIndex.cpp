#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
    // string str="aniket";
    // cout<<str<<endl;
    // int i=0;
    // while(str[i]!='\0'){
    //     if(i%2==0){
    //         str[i]='s';
    //     }
    //     i++;
    // }
    //   cout<<str<<endl;
}
