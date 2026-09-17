#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();
    stringstream ss(str);
    char temp;
    vector<char>v;
        while(ss>>temp){
        v.push_back(temp);
    }
    char max=v[0];
    for(char i=0;i<=n-1;i++){
        if(max<v[i]) max=v[i];
    }
    cout<<max;
    cout<<endl;
    char Smax=v[0];
    for(char i=0;i<=n-1;i++){
        if(v[i]!=max && v[i]>Smax) Smax=v[i];
    }
    cout<<Smax;
}