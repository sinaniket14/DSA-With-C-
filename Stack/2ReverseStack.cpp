#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>&st){
    stack<int>gt;
    while(st.size()>0){
        cout<<st.top()<<" ";
        gt.push(st.top());
        st.pop();
    }
    cout<<endl;
    // putting elements back from gt to st
    while(gt.size()>0){
        cout<<gt.top()<<" ";
        st.push(gt.top());
        gt.pop();
    }
    
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
} 