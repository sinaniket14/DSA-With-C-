#include<iostream>
using namespace std;
class Cricketer{
public :
   string name;
   int runs;
   float avg;

   Cricketer(string name,int runs,float avg){
       this->name=name;
       this->runs = runs;
       this->avg=avg;
   }
   void print(){
    cout<<this->name<<" "<<this->runs<<this->avg<<endl;
   }
   int matches(){
     return runs/avg;
   }
};
int main(){
    Cricketer c1("Virat Kohli",25000,55.2);
    Cricketer c2("Hitman Sharma",18000,47.5);

    //c1.name="Sachin";
    c1.print();
    c2.print();
    cout<<c1.matches()<<endl;
}
// passing object to func : by default its pass by value
// & use for pass by reference