//Merge Sorting into same one array using second array
#include<stdio.h>

void PrintList(int *arr,int n){
 for(int i = 0; i<n; i++){
   printf("%d ",arr[i]);
 }
  printf("\n");
}

void MergeSort(int A[],int B[],int mid,int high){
  int i=0,j=mid+1,k=0;
  while(i<mid && j<high){  //runs if both conditions are true
   if(A[i]<A[mid+1]){
     B[k]=A[i];
     k++;
     i++;
   }
   else{
     B[k]=A[mid+1];
     k++;
     j++;
   }
  }
  while(i<mid){  
    B[k]=A[i];
    k++;
    i++;
  }
  while(j<high){  
    B[k]=A[mid+1];
    k++;
    j++;
  }
}

int main(){ 
  //Both input array should be sorted then only this works
int A[6]={4,16,18,9,12,14};
int mid=2;
int B[6];
int high=6;
int n=6,m=6;
printf("Array A is   ");
PrintList(A,m);
printf("\nAfter Merge Sorting of two different array into single\n");
MergeSort(A,B,mid,high);
printf("Array B is   ");
PrintList(B,6);
return 0;
}
