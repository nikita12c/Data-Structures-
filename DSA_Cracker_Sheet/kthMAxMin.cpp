#include <iostream>
using namespace std;
#include<climits>
#include<queue>
//Method 1 : max heap // Time Complexity - O(nlogk)
int main() {
int arr[]={7,10,4,3,20,15};
int size=6;
int k=3;
priority_queue <int> maxh;
for (int i = 0; i < size; i++)
{
  maxh.push(arr[i]);
   if(maxh.size() > k){
     maxh.pop();
   }
}
  cout <<"Kth smallest element is "<<maxh.top()<<endl;
	return 0;
}


//Method2: Randomized Quick Select approach -O(n) complexity
int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}
int randomPartition(int arr[], int l, int r)
{
    int n = r-l+1; //size
    int pivot = rand() % n;
    swap(arr[l + pivot], arr[r]);
    return partition(arr, l, r);
}

int kthSmallest(int arr[], int l, int r, int k)
{
        int pos = randomPartition(arr, l, r);
        if (pos-l == k-1)
            return arr[pos];
        if (pos-l > k-1)  
            return kthSmallest(arr, l, pos-1, k);
        return kthSmallest(arr, pos+1, r, k-pos+l-1);
}