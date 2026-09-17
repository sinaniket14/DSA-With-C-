#include<iostream>
#include<vector>
using namespace std;
int dpp(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    if(n==3) return 4;
    vector<int>dp(n+1);

    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    
    for(int i=3;i<=n;++i){
        dp[i]=dpp(n-1)+dpp(n-2)+dpp(n-3);
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Total number of ways : "<<dpp(n);
}