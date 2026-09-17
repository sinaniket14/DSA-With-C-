#include<iostream>
using namespace std;
class Student{
    public :
    string name;
    int rno;

    Student(int r,string n,float m){
        rno=r;
        name=n;
        marks=m;
    }
    float getMarks(){
        return marks;
    }
    void setMarks(float m){
        marks=m;
    }
    private:
       float marks;
};
int main(){
    Student s1(9002,"Aniket",78);
    cout<<s1.getMarks()<<endl;
    s1.setMarks(92);
    cout<<s1.getMarks()<<endl;
}