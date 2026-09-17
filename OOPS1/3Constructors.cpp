#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float GPA;

    Student(){

    }
    Student(string s,int r,float g){
        name=s;
        roll=r;
        GPA=g;
    }
};
void print(Student s){
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.GPA<<endl;
    cout<<"---------------"<<endl;
}
int main(){
    Student s1("Aniket",9002,7.6);
    Student s2("Pratik",256,7.8); // constructor already bna hua h

    Student s3;
    s3.name="Pratik";
    s3.roll=560; //aise initialize krne pe default constructor bnana pdta h 
    s3.GPA=7.8;

    Student s4=s1; // copy constructor  Deep copy
    s4.name="Sanchit";

    Student s5(s2); // copy constructor  Deep copy
    s5.name="Varun";

    print(s1);
    print(s2);
    print(s4);
    print(s5);
}