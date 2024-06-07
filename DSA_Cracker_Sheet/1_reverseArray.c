#include<stdio.h>
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
} 

//Time Complexity : O(n)
//iterative 
void reverse1(int arr[],int size){
int temp;
int start=0;
int end=size-1;
while(start<end){
  temp=arr[start];
  arr[start]=arr[end];
  arr[end]=temp;
  start++;
  end--;
}
}

//recursive 
void reverse2(int arr[],int start,int end){
int temp;
// int start=0;
// int end=size-1;
if(start>=end){
  return;
}
  temp=arr[start];
  arr[start]=arr[end];
  arr[end]=temp;
  reverse2(arr,start+1,end-1);
}

int main(){
  int arr[]={2,4,6,8,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  printArray(arr,size);
  printf("Iterative way");
  reverse1(arr,size);
  printArray(arr,size);
  printf("Recursive way");
  int arr2[]={2,4,6,8,10};
  int start=0;
int end=size-1;
  reverse2(arr2,start,end);
  printArray(arr2,size);
  return 0;
}