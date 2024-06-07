#include<iostream>
#include<math.h>
using namespace std;

bool perfectSquare(int num){
  int sqrt_of_num=sqrt(num);
  if(sqrt_of_num * sqrt_of_num == num){
    return true;
  }
  return false;
}

//Method 2 Time Complexity : O(sqrt(N))
bool isPerfectSquare_2(int n)
{
    for (int i = 1; i * i <= n; i++) {
        // If (i * i = n)
        if ((n % i == 0) && (n / i == i)) {
            return true;
        }
    }
    return false;
}
//Method 3 Time Complexity : O(log(N)) Space Complexity: O(1)
bool isPerfectSquare_3(int x)
{ 
    long long left = 1, right = x;
    while (left <= right) 
    {
        long long mid = (left + right) / 2;
        // Check if mid is perfect square
        if (mid * mid == x) 
        {
            return true; 
        }
        // Mid is small -> go right to increase mid
        if (mid * mid < x) 
        { 
            left = mid + 1; 
        }
        // Mid is large -> to left to decrease mid
        else
        {
            right = mid - 1; 
        }
    }
    return false;
}
int main(){
  int arr[]={4,3,16,54,81,4,1,90,15,34,44,14,22,9,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
  if(isPerfectSquare_3(arr[i])){
    cout<<arr[i]<<" is perfect sq"<<endl;
  }
  else{
    cout<<arr[i]<<" is not a perfect sq"<<endl;
  }
  }

  return 0;
}