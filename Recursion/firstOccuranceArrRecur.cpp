#include<iostream>
using namespace std;

void print(int arr[20],int size,int i,int k){
 if(arr[i]==k){
 cout<<"First occurance of "<<k<<" using recursion is index : "<<i<<" ";
   return;
 }
 if(i==size-1){
    cout<<"\nElement not found";
    return;
  }
 print(arr,size,i+1,k);
}
int main(){
  // int arr[20]={10,20,30,40,50,10,20,50,60};
  int arr[20]={1,2,3,2,3,4,3,4,6,5,3};
  cout<<"Find  element : ";
  int k;
  cin>>k;
  int size=sizeof(arr)/sizeof(int);
  print(arr,size,0,k);

  return 0;
}