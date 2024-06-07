#include <iostream>
#include<cstring>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
   if(W==0 || n==0){  //base condition
       return 0;
   }
   //choice code
   if(wt[n-1]<=W){
       return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
   }
   else{
       return knapSack(W,wt,val,n-1);
   }
}

int knapSackdp(int W, int wt[], int val[], int n, int** dp)
{
   if(W==0 || n==0){  //base condition
       return 0;
   }
   if(dp[n][W] != -1){  //means element at index n W is already filled so no need to do knapsack
       return dp[n][W];
   }

   if(wt[n-1]<=W){
       return dp[n][W] = max(val[n-1]+knapSackdp(W-wt[n-1],wt,val,n-1,dp),knapSackdp(W,wt,val,n-1,dp));
   }
   else if(wt[n-1]>W){
       return dp[n][W] = knapSackdp(W,wt,val,n-1,dp);
   }
}

int knapSack2(int W, int wt[], int val[], int n)
{ // double pointer to declare the table dynamically
   int **dp;
   dp = new int *[n];
//    memset(dp,-1,sizeof(dp)); //initialize matrix with -1
   for (int i = 0; i < n; i++) // loop to create the table dynamically
   {
       dp[i] = new int[W+1];
   }
// loop to initially filled the table with -1
    for (int i = 0; i < n; i++){
      for (int j = 0; j < W + 1; j++){
        dp[i][j] = -1;
      }
    }
   return knapSackdp(W, wt, val, n , dp);
}

int main(){
//        int dp[n][W];
//    memset(dp,-1,sizeof(dp)); //initialize matrix with -1
int N = 3, W = 4;
int val[] = {1,2,3};
int wt[] = {4,5,1};
// int res=knapSack(W,wt,val,N);
// cout<<"\nThe maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W is ="<<res<<endl;
int res=knapSack2(W,wt,val,N);
cout<<"\nThe maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W is ="<<res<<endl;
return 0;
}