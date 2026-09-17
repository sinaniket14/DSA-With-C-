#include<iostream>
using namespace std;
int main(){
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n500;
    n1=n2=n5=n10=n20=n50=n100=n500=0;
    cout<<"Enter Amount :";
    cin>>amount;
    switch(amount>=500){
        case 1:
          n500=amount/500;
          amount-=n500*500;
          cout<<"500="<<n500<<endl;
          break;
    }
        switch(amount>=100){
        case 1:
          n100=amount/100;
          amount-=n100*100;
           cout<<"100="<<100<<endl;
          break;
    }
        switch(amount>=50){
        case 1:
          n50=amount/50;
          amount-=n50*50;
           cout<<"50="<<n50<<endl;
          break;
    }
        switch(amount>=20){
        case 1:
          n20=amount/20;
          amount-=n20*20;
           cout<<"20="<<n20<<endl;
          break;
    }
        switch(amount>=10){
        case 1:
          n10=amount/10;
          amount-=n10*10;
           cout<<"10="<<n10<<endl;
          break;
    }
        switch(amount>=5){
        case 1:
          n5=amount/5;
          amount-=n5*5;
           cout<<"5="<<n5<<endl;
          break;
    }
        switch(amount>=2){
        case 1:
          n2=amount/2;
          amount-=n2*2;
           cout<<"2="<<n2<<endl;
          break;
    }
}