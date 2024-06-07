// Initial template for C++
#include<bits/stdc++.h>
using namespace std;

int findPages(int arr[], int n, int m);
int main() {
    int t;
    cout<<"Enter Test cases"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter no. of books"<<endl;
        cin>>n;
        int A[n];
        cout<<"Enter pages in each book"<<endl;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cout<<"Enter no. of students"<<endl;
        cin>>m;
        cout <<"Minimum pages particular student have to read = "<< findPages(A, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//User function template in C++
bool isvalid(int arr[], int n, int m, int mid){
  int student=1,sum=0;
  for(int i=0;i<n;i++){
      sum=sum+arr[i];
      if(sum>mid){
          student++;
          sum=arr[i];
      }
      if(student>m){  //if no. of students exceed
          return false;
      }
  }
  return true;
}

int findPages(int arr[], int n, int m) {
   int sum=0;
   for(int i=0;i<n;i++){
       sum+=arr[i];
   }
   int start=*max_element(arr,arr+n);  //start from max element from array
   int end=sum;  //end is sum of all elements from array
   int res=-1;
   while(start<=end){
       int mid=start+((end-start)/2);
       if(isvalid(arr,n,m,mid)==true){  //move to LHS
           res=mid;
           end=mid-1;
       }
       else{
           start=mid+1;  //move to RHS
       }
   }
    return res;
}

