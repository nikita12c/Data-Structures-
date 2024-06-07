#include <iostream>
#include <vector>
using namespace std;

//Recursive code 
int binarySearch(vector<int> &vec , int target,int high,int low){
       if(low>high){
          return -1;
       }
       int mid = low + ((high-low)/2); //to avoid overflow
        if(vec[mid]==target){
            return mid; // target found , so return index of target
        }
        else if(vec[mid]<target){
            low=mid+1;
            return binarySearch(vec,target,high,low);
        }else{
            high=mid-1;
            return binarySearch(vec,target,high,low);
        }
}

int main(){
    vector<int> vec={2,4,6,8,10,12,14,16,18}; // nums should ne sorted ordered to apply binary search
    int target=6;
    int res = binarySearch(vec,target);
    if(res== -1){
        cout<<"Target not found";
    }else{
        cout<<"Target : "<<target<<"found at index "<<res;
    }
    return 0;
}