//Longest Span with same Sum in two binary arrays
// Given two binary arrays arr1[] and arr2[] of same size n. Find length of the longest common span (i, j) where j >= i such that arr1[i] + arr1[i+1] + …. + arr1[j] = arr2[i] + arr2[i+1] + …. + arr2[j].
// Expected time complexity is Θ(n).

#include<iostream>
using namespace std;

//Method-1 ()
// Time Complexity = O(n*n)
// Space Complexity = O(1)
int longestCommonSum(bool arr1[],bool arr2[],int n){
//one by one pick all possible starting points of subarrays thus i is declared
int maxLen=0;
for (int i = 0; i < n; i++)
{
  // cout<<" i "<<i<<endl;
  int sum1=0,sum2=0;
  for (int j = i; j < n; j++) //go all points starting from arr[i]
  {
      // cout<<" j "<<j<<endl;
    sum1=sum1+arr1[j];  //update sums
    sum2=sum2+arr2[j];
    if(sum1==sum2){  //if two sums equal then check if this is max length
      int len=j-i+1;
       if(len>maxLen){
         maxLen=len;
        //  cout<<"MaxLen for i= "<<i<<" j= "<<j<<" is "<<maxLen<<"Length is "<<len<<"Sum is "<<sum1<<"  "<<sum2<<endl;
       }
    }
  }
}
return maxLen;
}

int main(){
  bool arr1[]={0,1,0,1,1,1,1};
  bool arr2[]={1,1,1,1,1,0,1};
  int n=sizeof(arr1)/sizeof(bool);
  // cout<<"Array Size n is "<<n<<" \n";
  // int result=longestCommonSum(arr1,arr2,n);
  cout<<"Length of longest common span with same sum in both array is "<<longestCommonSum(arr1,arr2,n);
  return 0;
}

// https://www.geeksforgeeks.org/longest-span-sum-two-binary-arrays/
//Method 1 -simple sol
// One by one by consider same subarrays of both arrays. For all subarrays, compute sums and if sums are same and current length is more than max length, then update max length. Below is C++ implementation of simple approach.
