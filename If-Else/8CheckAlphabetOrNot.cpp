#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character :";
    char ch;
    cin>>ch;
    int ascii = (int)ch;

    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        cout<<"The character is an alphabet"<<endl;
    }
    else{
        cout<<"Not an alphabet";
    }
    
    if(ascii>=97 && ascii<=122){
        cout<<"The character is Lowercase alphabet"<<endl;
    }
    if(ascii>=65 && ascii<=90){
        cout<<"The character is UpperCase alphabet"<<endl;
    }

    
    return 0;
}