#include<stdio.h>

int factorial(int n){
  int fact;
  if(n==0){
    return 1;
  }
  fact = n*factorial(n-1);
  return fact;
}
int main(){
  int n=5;
  // printf("Which nos factorial u want\n");
  // scanf("%d ",&n);
  int result=factorial(n);
  printf("Factorial of %d is %d ",n,result);
  return 0;
}
