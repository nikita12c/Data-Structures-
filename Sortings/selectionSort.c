#include<stdio.h>

void PrintList(int *arr,int n){
 for(int i = 0; i<n; i++){
   printf("%d ",arr[i]);
 }
  printf("\n");
}

void selectionSort(int *arr,int n){
for (int i = 0; i < n-1; i++)  //for no. of passses
{ int temp;
  int indexOfMin=i;
  for (int j = i+1; j < n; j++) //runs from i+1 to n-1 times  , it finds min index
  {
    if(arr[j]<arr[indexOfMin]){
      indexOfMin=j;
    }
  }
  temp=arr[i]; //swapping
  arr[i]=arr[indexOfMin];
  arr[indexOfMin]=temp;
}
}

int main(){
int arr[]={6,9,3,5,8,1};
// int arr[]={1,2,3,4,5,6};
// int arr[]={1,2,3,4,5,6,70,245,9,33,23};
int n=6;
PrintList(arr,n);
printf("\nAfter Selection Sorting\n");
selectionSort(arr,n);
PrintList(arr,n);
return 0;
}

// 0  1   2  3  4  5
// 06 09 03 05 08 01 
// 01|09 03 05 08 06  1st pass
// 01 03|09 05 08 06  2nd pass
// 01 03 05|09 08 06  3rd pass
// 01 03 05 06|08 09  4th pass
// 01 03 05 06 08|09  5th pass
