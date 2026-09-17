#include<iostream>
using namespace std;
class Cricketer{
    public:
    int runs;
    int wickets;
    int average;
};
class Engineer{
    public:
    int experience;
    string doman;
};
class Phodu : public Engineer,Cricketer{
    public:
    string name;
};
int main(){
    Phodu p1;
    //p1.runs=5000;

}