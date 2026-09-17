#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
       this->name=name;
       this->runs=runs;
       this->avg=avg;

    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->runs<<endl;
        cout<<this->avg<<endl;
    }
};
int main(){
    Cricketer c1("MSD",18000,50.67);
    c1.print();

    Cricketer *p1 = &c1;
    cout<<p1->runs<<endl;

    p1->avg=70.67;
    cout<<p1->avg<<endl;

    int* ptr=new int(542);
    cout<<*ptr<<endl;
}