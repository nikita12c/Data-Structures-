#include<iostream>
using namespace std;

bool checkSorted(int arr[],int n,int i){
 if(i==n-1){
   return true;
 }
 if(arr[i]<arr[i-1]){
   cout<<"Stopping here becoz "<<arr[i]<<" < "<<arr[i-1]<<endl;
   return false;
 }
 checkSorted(arr,n,i+1);
}

int main(){
  // int arr[5]={1,2,3,4,5};
  int arr[10]={1,2,2,4,5,7,1,23,51,9};
  int size=sizeof(arr)/sizeof(arr[0]);
  int res=checkSorted(arr,size,1);
  if(res==1){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
  return 0;
}