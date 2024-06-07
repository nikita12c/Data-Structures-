#include<iostream>
using namespace std;

//Time Complexity: O(N*logN)  in avg case   O(n*n) for worst case
// Space: O(1)

int partition(int arr[30],int low,int high){
 int pivot=arr[high];
 int m=low-1;
 for (int i = low; i<high; i++)
 {
   if(arr[i]<pivot){
     m++;
     swap(arr[i],arr[m]);
   }
 }
 swap(arr[m+1],arr[high]); //giving pivot its right position
 return m+1;
}

void QuickSort(int arr[30],int low,int high){
  int pivot_new_place;
    if(low<high){
      pivot_new_place=partition(arr,low,high);
      QuickSort(arr,low,pivot_new_place-1);  //before pivot
      QuickSort(arr,pivot_new_place+1,high);  //after pivot
    }
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		{
      cout << arr[i] << " ";
    }
}

int main(){
  int arr[30]={3,2,5,1,4,8,7,9,11,13,10,14,17,19,22,44,33,65,89,67,34,29,89,70,100,145,123,111,167,99};
  int n=30;
  int low=0,high=n-1;
  QuickSort(arr,low,high);
  cout<<"Sorted elements using Quick Sort : ";
  printArray(arr,n);
  return 0;
}