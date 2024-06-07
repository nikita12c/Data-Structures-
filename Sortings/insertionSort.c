#include<stdio.h>

void PrintList(int *arr,int n){
 for(int i = 0; i<n; i++){
   printf("%d ",arr[i]);
 }
  printf("\n");
}

void InsertionSort(int arr[],int n){
for (int i = 1; i <= n-1; i++)
{
  int key=arr[i];
  int j=i-1;
  while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
  }
  arr[j+1]=key;

                                                                                    // for (int i = 0; i < n; i++) //for printing passes
                                                                                    // {
                                                                                    // printf(" %d  ",arr[i]);
                                                                                    // }
                                                                                    // printf("\n");
}
}

int main(){
int arr[]={6,9,3,5,8,1};
// int arr[]={1,2,3,4,5,6};
// int arr[]={1,2,3,4,5,6,70,245,9,33,23};
int n=6;
PrintList(arr,n);
printf("\nAfter Insertion Sorting\n");
InsertionSort(arr,n);
PrintList(arr,n);
return 0;
}
  // 0   1   2  3  4  5
  // 23 54   66 01 04 09 --> i=1 , j=0 , key=54
  // 23 |54  66 01 04 09 --> (1st pass done)
  // 23 |54  66 01 04 09 --> i=2 , j=1 , key=66
  // 23 54  66| 01 04 09 --> (2nd pass done)
  // 23 54  66| 01 04 09 --> i=3 , j=2 , key=01
  // 23 54    | 66 04 09  j=2   66>01
  // 23     54| 66 04 09  j=1   54>01
  //    23  54| 66 04 09  j=0   23>01
  // 01 23  54 66| 04 09  j= -1  loop end ,arr[0]=01 (3rd pass done)
  // 01 23  54 66| 04 09 --> i=4 , j=3 , key=04
  // 01 23  54     66 09
  // 01 23      54 66 09
  // 01     23 54  66 09
  // 01 04  23 54  66|09  (4th pass)
  //similarly
  // 01 04  09 23 54  66| (5th pass)
  