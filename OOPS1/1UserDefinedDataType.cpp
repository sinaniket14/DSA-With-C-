#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float GPA;
    int age;
};
int main(){
    Student s1;
    s1.name="Aniket";
    s1.roll=9002;
    s1.GPA=7.6;
    cout<<"Enter age : ";
    cin>>s1.age;

    Student s2;
    s2.name="Pratik";
    s2.roll=560;
    s2.GPA=7.8;

    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.GPA<<endl;
    cout<<s1.age;
}