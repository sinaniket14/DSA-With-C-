#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private : // data hiding
    double salary;

    public :
    string name;
    string dept;
    string subject;
    //Copy constructor
    Teacher(Teacher &orgObj){
      cout<<"HI,I am a custom copy constructor"<<endl;
      this->name = orgObj.name;
      this->subject = orgObj.subject;
      this->salary = orgObj.salary;
    }
    Teacher(string name,string dept,string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
// this pointer points to current object
    }
    double getSalary(){
        return salary;
     }
};
int main(){
    Teacher t1("Aniket","CSE","DSA",25000);
    Teacher t2(t1);

    cout<<t2.subject<<endl;
    cout<<t2.getSalary()<<endl;
}