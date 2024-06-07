#include<stdio.h>


int fibonacci_r(int n){  //using recursion
  int fib;
  if(n<=1){
    return n;
  }
  fib = fibonacci_r(n-1)+fibonacci_r(n-2);
  return fib;
}


int fibonacci(int n){  //without recursion using for loop
  if(n<=1){
    return n;
  }
  else{
    int F1,F2;
    F1=0;
    F2=1;
    int F;
    for(int i=2;i<=n;i++){
    F=F1+F2;
    F1=F2;
    F2=F;
    }
return F;
  }
}

int main(){
  int n=6;
  // printf("How many nos fibo u want\n");
  // scanf("%d ",&n);
 int result1= fibonacci_r(n);
  printf("Using Recursion Fibonacci of %d numbers is %d \n",n,result1);
 int result2= fibonacci(n);
  printf("Using for loop Fibonacci of %d numbers is %d ",n,result2);
  return 0;
}