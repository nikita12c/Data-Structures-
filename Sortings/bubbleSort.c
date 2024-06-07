#include<stdio.h>
#include<conio.h>

void PrintList(int *arr,int n){
 for(int i = 0; i<n; i++){
   printf("%d ",arr[i]);
 }
  printf("\n");
}

void BubbleSort(int *arr,int n){
int temp,i,j;

 for(i = 0 ; i < n - 1; i++){ //for no. of pass
   for(j = 0 ; j < n-1-i; j++){  //for comparisions in each pass
     //swapping
     if(arr[j]>arr[j+1]){
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
     }
   }
 }
}
// The above function always runs O(n^2) time even if the array is sorted. It can be optimized by stopping the algorithm if inner loop didn’t cause any swap.
void BubbleSortAdaptive(int *arr,int n){
int temp,i,j;
int isSorted=0;
 for(i = 0 ; i < n-1; i++){ //for no. of pass
  printf("no. of pass-- %d \n",i+1);
  isSorted=1;
   for(j = 0 ; j < n-1-i; j++){  //for comparisions in each pass
     if(arr[j]>arr[j+1]){  //swapping
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
       isSorted=0;
     }
   }
  // IF no two elements were swapped by inner loop, then break 
   if(isSorted==1){
     break;
   }
 }
}

int main(){
int arr[]={6,9,3,5,8,1};
// int arr[]={1,2,3,4,5,6};
// int arr[]={1,2,3,4,5,6,70,245,9,33,23};
int n=6;
PrintList(arr,n);
printf("\nAfter Bubble Sorting\n");
// BubbleSort(arr,n);
BubbleSortAdaptive(arr,n);
PrintList(arr,n);
return 0;
}