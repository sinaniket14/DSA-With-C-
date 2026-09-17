#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="aniket";
//     reverse(str.begin(),str.end());
//     cout<<str;
  int i = 0;
  int j = str.length()-1;
  while(i<j){
    char temp = str[i];
    str[i] = str[j];
    str[j] =  temp;
    i++;
    j--;
  }
  cout<<str;
}