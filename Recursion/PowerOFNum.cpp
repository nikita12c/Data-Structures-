#include<iostream>
using namespace std;
//Find 2 power n code

//O(n) time
int power(int n){
int res;
if(n==0){
  return 1;
}
res=n*power(n-1);
return res;
}

//Optimized solution
//O(logn) time
int power_optimized(int n){
int res;
if(n==1){
  return 2;
}
//even case
if(n%2==0){
res = power_optimized(n/2)*power_optimized(n/2);
}
else{ //odd case
res = 2*power_optimized(n/2)*power_optimized(n/2);
}
return res;
}


int main(){
  int num;
  cin>>num;
  cout<<" 2 power "<<num<<" is : ";
  cout<<power_optimized(num);
  return 0;
}