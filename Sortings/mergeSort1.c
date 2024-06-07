//Merge Sorting of two different array into single third
#include<stdio.h>

void PrintList(int *arr,int n){
 for(int i = 0; i<n; i++){
   printf("%d ",arr[i]);
 }
  printf("\n");
}

void MergeSort(int A[],int B[],int C[],int m,int n){
  int i=0,j=0,k=0;
  while(i<m && j<n){  //runs if both conditions are true
   if(A[i]<B[j]){
     C[k]=A[i];
     k++;
     i++;
   }
   else{
     C[k]=B[j];
     k++;
     j++;
   }
  }
  while(i<m){  //copy all remaining elements from A to C iff B array is ended
    C[k]=A[i];
    k++;
    i++;
  }
  while(j<n){  //copy all remaining elements from B to C iff A array is ended
    C[k]=B[j];
    k++;
    j++;
  }
}

int main(){ 
  //Both input array should be sorted then only this works
int A[6]={4,6,8,9,12,14};
int B[6]={1,3,5,9,15,20};
int C[12];

int n=6,m=6;
printf("Array A is   ");
PrintList(A,m);
printf("Array B is   ");
PrintList(B,n);
printf("\nAfter Merge Sorting of two different array into single\n");
MergeSort(A,B,C,m,n);
printf("Array C is   ");
PrintList(C,(m+n));
return 0;
}
