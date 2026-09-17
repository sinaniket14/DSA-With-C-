#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DLL{ // user defined data structure
public:
      Node* head;
      Node* tail;
      int size;

      DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    size++;
}
  void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }

    void insertAtIdx(int idx,int val){
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->prev=temp;
        t->next->prev=t;
        size++;
    }
    void display(){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
  }
};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display();
    cout<<endl;
}