#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int arr[5]={0,1,0,3,12};
   int j=0;
   for(int i=0;i<5;i++){
      if(arr[i]!=0){
         swap(arr[i],arr[j]);
         j++;
      }
   }
   for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
   }
}