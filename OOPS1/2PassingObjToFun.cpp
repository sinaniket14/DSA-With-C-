#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float GPA;
    int age;
};
void print(Student s){
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    cout<<s.GPA<<endl;
    cout<<s.age<<endl;
}
int main(){
    Student s1;
    s1.name="Aniket";
    s1.roll=9002;
    s1.GPA=7.6;

    Student s2;
    s2.name="Pratik";
    s2.roll=560;
    s2.GPA=7.8;

    print(s1);
    print(s2);
}