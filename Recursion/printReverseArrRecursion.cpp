#include<iostream>
using namespace std;

void print(int arr[6],int size,int i){
 if(i==size-1){
   return;
 }
 print(arr,size,i+1);
 cout<<arr[i]<<" ";
}
int main(){
  int arr[6]={10,20,30,40,50};
  int size=sizeof(arr)/sizeof(int);
  print(arr,size,0);

  return 0;
}