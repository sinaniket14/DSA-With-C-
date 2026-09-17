#include<iostream>
#include<vector>
using namespace std;
class stack{
public:
    vector<int>v;

    stack(){

    }
    // push element
    void push(int val){
        v.push_back(val);
    }
    // pop element
    void pop(){
        if(v.size()==0){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        v.pop_back();
    }
    // access top
    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    //size
    int size(){
        return v.size();
    }
};
int main(){
    stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}