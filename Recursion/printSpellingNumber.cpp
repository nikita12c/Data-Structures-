#include<iostream>
using namespace std;

void printNumberInWords(int n){
 string res="";
 string arr[10]={"zero","one","two","three","four","five"};
 if(n==0){
   return;
 }
printNumberInWords(n/10);
cout<<arr[n%10]<<" ";

}

int main(){
  int num=451;
  printNumberInWords(num);
  return 0;
}