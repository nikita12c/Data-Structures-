#include<iostream>
using namespace std;
// Function to find subarray with maximum sum
// Kadane's Algorithm
//Time : O(n)
//Space : O(1)
int maxSubarraySum(int arr[], int n){
    int max=INT_MIN;
    int maxTH=0;
    for(int i=0;i<n;i++){
        maxTH+=arr[i];
        if(maxTH>max){
            max=maxTH;
        }
        if(maxTH<0){
            maxTH=0;
        }
    }
    return max;
}
int main() {
	  int T,N;
  cout<<"Enter T"<<endl;
	cin>>T;
	while(T--){
  cout<<"Enter N"<<endl;
	    cin>>N;
	int a[N];

  cout<<"Enter Array elements of a"<<endl;
	    for(int i=0;i<N;i++){
	      cin>>a[i];
	    }
      int max= maxSubarraySum(a,N);
	   cout<<max;
  return 0;
  }
}

//if we use brute force approach then complexity will be O(n*n)