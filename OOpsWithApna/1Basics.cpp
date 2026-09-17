#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private : // data hiding
    double salary;

    public :
    Teacher(){
        cout<<"Hi, i am constructor"<<endl;
        // multiple constructor in same class but different parameter is called constructor overloading
        //that is polymorphism
    }
    string name;
    string dept;
    string subject;

    void setSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
};
int main(){
    Teacher t1; // constructor call
    t1.name = "Aniket";
    t1.dept = "CSE";
    t1.subject = "DSA";
    t1.setSalary(120000);
    cout<<t1.getSalary()<<endl;

    cout<<t1.subject<<endl;
}