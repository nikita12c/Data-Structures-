// Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.
// Input:
// N = 4, K = 2
// Arr = [100, 200, 300, 400]
// Output:
// 700
// Explanation:
// Arr3  + Arr4 =700,
// which is maximum.

#include<iostream>
using namespace std;
#include<vector>
int maxSum(int arr[7],int n,int k){
  // vector <int> A;
    int start=0;
    int end=0;
    int sum=0;
    int mx=INT_MIN;
    while(end<n){
        sum=sum+arr[end];
        if(end-start+1 < k){
            end++;
        }
        else if(end-start+1 == k){
            mx=max(mx,sum);
            // A.push_back(sum);
            sum=sum-arr[start];
            start++;end++;
        }
    }
    //  for(int i=0;i<A.size();i++){
    //   cout<<" "<<A[i];}
return mx;
}
int main(){
  int arr[7]={2,5,1,8,2,9,1}; //sum will be 7,6,9,10,11,10 nd max of it is 11 so ans is 11
  int n=7 ,k=2;
  cout<<"Max is "<<maxSum(arr,n,k);
  
  return 0;
}