#include<iostream>
using namespace std;

void printheap(int arr[],int n){
  cout << "Array representation of Heap is:\n";
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

void buildheap(int arr[],int n){
// Index of last non-leaf node is parent of last leaf node parent=n/2 but for 0-based indexing its n/2 -1
    int startIdx = (n / 2) - 1;
    for(int i=startIdx; i>=0; i--){
    heapify(arr, n, i);
    }
}

int main(){
  int arr[]={1,3,5,4,6,13,10,9,8,15,17};
  int n=sizeof(arr)/sizeof(arr[0]);
  buildheap(arr,n);
  printheap(arr,n);
  return 0;
}
//  The above approach can be optimized by observing the fact that the leaf nodes need not to be heapified as they already follow the heap property. Also, the array representation of the complete binary tree contains the level order traversal of the tree.
// So the idea is to find the position of the last non-leaf node and perform the heapify operation of each non-leaf node in reverse level order.Last non-leaf node = parent of last-node.