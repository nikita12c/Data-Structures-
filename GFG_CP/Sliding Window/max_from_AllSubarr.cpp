#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector <int> maxSum(int arr[7],int n,int k){
   vector <int> A;
    int start=0;
    int end=0;
    // int sum=0;
    int mx=INT_MIN;
    while(end<n){
        // sum=sum+arr[end];
        mx=max(mx,arr[end]);
        if(end-start+1 < k){
            end++;
        }
        else if(end-start+1 == k){
            mx=max(mx,arr[end]);
            A.push_back(mx);
            start++;end++;
        }
    }
return A;
}
int main(){
  int arr[7]={2,5,1,8,2,9,1};
  int n=7 ,k=2;
  vector <int> A=maxSum(arr,n,k);
    for(int i=0;i<A.size();i++){
      cout<<" "<<A[i];}
  return 0;
}