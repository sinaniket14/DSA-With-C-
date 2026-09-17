#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character :";
    char ch;
    cin>>ch;
    int ascii = (int)ch;

    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"The character is Vowel";
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"The character is Vowel";
    }
    else{
        cout<<"The character is Consonant";
    }
    }
    else{
        cout<<"The character is Consonant";
    }
    return 0;
}