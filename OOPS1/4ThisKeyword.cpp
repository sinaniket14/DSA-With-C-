#include<iostream>
using namespace std;
class Cricketer{
public :
   string name;
   int runs;

   Cricketer(string name,int runs){
       this->name=name;
       this->runs = runs;
   }
   void print(){
    cout<<this->name<<" "<<this->runs<<endl;
   }
};
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Hitman Sharma",18000);

    cout<<c1.name<<endl;
    cout<<c1.runs<<endl;

    cout<<endl;

    cout<<c2.name<<endl;
    cout<<c2.runs<<endl;

    c1.print();
    c2.print();
}