// Sort an array of 0s, 1s and 2s
//Method 1
// Count the number of 0s, 1s and 2s in the given array. Then store all the 0s in the beginning followed by all the 1s then all the 2s.
// Complexity Analysis:
// Time Complexity: O(n). Only two traversals of the array is needed.
// Space Complexity: O(1). As no extra space is required.
//We can also do this in one traversal see gfg
#include<iostream>
using namespace std;
void printArr(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
}
// Function to sort the array of 0s, 1s and 2s 
void sortArr(int a[], int n) 
{ 
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count0+=1;
        }
        else if(a[i]==1){
            count1+=1;
        }
        else{
            count2+=1;
        }
    }

    int k=0; //for array input
    for(int i=0;i<count0;i++){
        a[k++]=0; //store 0 then increment by 1
    }
    for(int i=0;i<count1;i++){
        a[k++]=1; //store 1 then increment by 1
    }
    for(int i=0;i<count2;i++){
        a[k++]=2;
    }
    // Print the sorted array 
    printArr(a, n); 
}
int main() 
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = sizeof(arr) / sizeof(int); 
    sortArr(arr, n); 
    return 0; 
}