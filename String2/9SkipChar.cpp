#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans,string original,int idx){
   if(idx==original.length()){
    cout<<ans;
    return;
   }
   char ch=original[idx];
   if(ch=='h') removeChar(ans,original,idx+1);
   if(ch!='h') removeChar(ans+ch,original,idx+1);
}
int  main(){
    string str="physicswallah";
    removeChar("",str,0);
}