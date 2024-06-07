#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &vec , int target){
    int low=0;
    int high=vec.size()-1;
    while(low<=high){ // searching space
       int mid = low + ((high-low)/2); //to avoid overflow
        if(vec[mid]==target){
            return mid; // target found , so return index of target
        }
        else if(vec[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return -1;// indicate that target is not found ... not available in search space
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