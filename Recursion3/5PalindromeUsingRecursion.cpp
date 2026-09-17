#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str,int i,int j){
    if(i>=j) return true;
    if(str[i]==str[j]){
        isPalindrome(str,i+1,j-1);
        return true;
    }
    else return false;
}
int main(){
    string str="mom";
    cout<<isPalindrome(str,0,str.length()-1);
}