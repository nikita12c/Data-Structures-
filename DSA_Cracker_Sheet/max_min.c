// Write a C function to return minimum and maximum in an array. Your program should make the minimum number of comparisons. 

//We have created a structure named pair (which contains min and max) to return multiple values.
// Initialize values of min and max as minimum and maximum of the first two elements respectively. Starting from 3rd, compare each element with max and min, and change max and min accordingly (i.e., if the element is smaller than min then change min, else if the element is greater than max then change max, else ignore the element)

#include<stdio.h>

struct pair{
int max;
int min;
};

//METHOD 1 (Simple Linear Search) 
struct pair getMinMax(int arr[],int n){
struct pair minmax;

/*If there is only one element then return it as min and max both*/
if(n==1){
  minmax.min=arr[0];
  minmax.max=arr[0];
  return minmax;
}

/* If there are more than one elements, then initialize min and max*/
if(arr[0]<arr[1]){
  minmax.min=arr[0];
  minmax.max=arr[1];
}
else{
  minmax.max=arr[0];
  minmax.min=arr[1];
}
for (int i = 2; i < n; i++)
{
  if(arr[i]>minmax.max){
    minmax.max=arr[i];
  }
  else if(arr[i]<minmax.min){
    minmax.min=arr[i];
  }
}
return minmax;
}

int main(){
 int arr[] = {1000, 11, 445, 1, 330, 3000};
  int arr_size = 6;
  struct pair result=getMinMax(arr,arr_size);
  printf("Minimum element is %d \n", result.min);
  printf("Maximum element is %d", result.max);
  return 0;
}
// Time Complexity: O(n)
// In this method, the total number of comparisons is 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case. 
// In the above implementation, the worst case occurs when elements are sorted in descending order and the best case occurs when elements are sorted in ascending order.