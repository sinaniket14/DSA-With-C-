#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter day number :";
    cin>>x;
    switch(x){
     case 1: // Jan
        cout<<"31";
        break;
    case 2: // Feb
        cout<<"28";
        break;
    case 3: // March
        cout<<"31";
        break;
    case 4:  // April
        cout<<"30";
        break;
    case 5:  // May
        cout<<"31";
        break;
    case 6: // june
        cout<<"30";
        break;
    case 7: // july
        cout<<"31";
        break;
     case 8: // August
        cout<<"31";
        break;
     case 9: // September
        cout<<"30";
        break;
     case 10: //  Oct
        cout<<"31";
        break;
     case 11: // Nov
        cout<<"30";
        break;
     case 12: // Dec
        cout<<"31";
        break;
    default :{
    cout<<"Invalid number";
    }
    }
}