    #include<iostream>
    using namespace std;
    int main(){
        string str = "1011";
        int n=str.length();
        int sum=0;
        int product=1;
        for(int i=n-1;i>=0;i--){
            sum += (str[i]-'0')*product;
            product *= 2;
        }
        cout<<sum;
    }