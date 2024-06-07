#include<iostream>
using namespace std;
#include<algorithm>
#include<unordered_map>

//Method 1 : Time:  O(n*2) , Space :   O(1)
bool subarray(int arr[],int n){
  for(int i=0;i<n;i++){
      int sum=0;
     for(int j=i;j<n;j++){
       sum=sum+arr[j];
      //  cout<<sum<<endl;
       if(sum==0){
         return true;
       }
     }
  }
return false;
}

//Method 2 : Time:  O(n) , Space :   O(n) for prefix array (we take unorderes map for that)
//make a prefix sum , in it check 3 conditions : if there is alreay 0 in array|| if prefix sum has any 0 || if any element is repeating
bool subarray2(int arr[],int n){
  //4 2 -3 1 6
  int sum=0;
  unordered_map<int,int> m;
  for (int i = 0; i < n; i++)
  {
    sum=sum+arr[i];
    if(arr[i]==0 || sum==0 || m[sum]>0 ){
    // cout<<m[sum]<<endl;
      return true;
    }
    else{
      m[sum]=1;
      // cout<<m[sum]<<endl;
    }
  }
return false;
}

int main(){
  int arr[]={4,2,-3,1,6}; //prefixArr=4,6,3,4,10
  int n=5;
 bool result=subarray2(arr,n);
 if(result){
   cout<<"Result "<< "true";
 }
 else{
   cout<<"Result "<< "false";
 }
  return 0;
}
