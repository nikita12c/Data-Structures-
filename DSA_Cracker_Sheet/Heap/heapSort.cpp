#include<iostream>
using namespace std;
// Heap sort is an in-place algorithm.
// Its typical implementation is not stable, but can be made stable (See this)
// Time Complexity: Time complexity of heapify is O(Logn). Time complexity of createAndBuildHeap() is O(n) and overall time complexity of Heap Sort is O(nLogn).
void printheap(int arr[],int n){
  cout << "After applying HeapSort elements are:\n";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
}

void heapify(int arr[],int n,int i){
 int largest=i;  // Initialize largest as root
 int left=2*i+1;
 int right=2*i+2;
  // If left child is larger than root
 if(left<n && arr[left]>arr[largest]){
   largest=left;
 }
 // If right child is larger than largest so far
 if(right<n && arr[right]>arr[largest]){
   largest=right;
 }
  // If largest is not root
 if(largest!=i){
   swap(arr[i],arr[largest]);
   // Recursively heapify the affected sub-tree
   heapify(arr,n,largest);
 }
}


void heapSort(int arr[],int n){
 // Index of last non-leaf node is parent of last leaf node parent=n/2 but for 0-based indexing its n/2 -1
    int startIdx = (n / 2) - 1; //Build heap (rearrange array)
    for(int i=startIdx; i>=0; i--){
    heapify(arr, n, i);
    }
  // One by one extract an element from heap (we r deleting actually nd storing deleted value at end of arr using swap)
 for (int i = n-1; i > 0; i--)
 {
  swap(arr[0],arr[i]); // Move current root to end
  // call max heapify on the reduced heap
  heapify(arr, i, 0);
 }

}

int main(){
  int arr[]={1,3,5,4,6,13,10,9,8,15,17};
  int n=sizeof(arr)/sizeof(arr[0]);
  heapSort(arr,n);
  printheap(arr,n);
  return 0;
}
