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
    //cout<<t1.getSalary()<<endl;

    cout<<t1.subject<<endl;
    cout<<t1.getSalary();
    //Destructor are always called after complition of main fun in shallow copy
    // if our obj is dynimically allocated then we have to delete it manually 
    //~student(){
    //    delete cgptr;
    // }
}