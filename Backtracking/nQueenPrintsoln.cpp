//soln in array matrix

// #include<bits/stdc++.h>
// using namespace std;

// bool isSafe(int **board, int row_ref, int col_ref, int n)
// {
//  for (int row = 0; row < row_ref; row++)
//  {
//    if(board[row][col_ref]==1){
//      return false;
//    }
//  }
//  int row=row_ref;
//  int col=col_ref;
//  while (row>=0 && col>=0)
//  {
//    if(board[row][col]==1){
//      return false;
//    }
//    row--;
//    col--;
//  }
//  while (row>=0 && col<n)
//  {
//    if(board[row][col]==1){
//      return false;
//    }
//    row--;
//    col++;
//  }
// return true;
// }
// bool nQueen(int **board, int row ,int n){
//  if(row>=n){  //base condition
//    return true;
//  }
//  for (int col = 0; col < n; col++)
//  {
//    if(isSafe(board,row,col,n)){
//       board[row][col]=1;
//       if(nQueen(board,row+1,n)){
//         return true;
//       }
//    }
//    board[row][col]=0;
//  }
//  return false;
// }

// int main(){
// int n;
// cout<<"Enter n ";
// cin>>n;

// int **arr = new int*[n];
// for (int i = 0; i < n; i++)
// {
//   arr[i]=new int[n];
//   for (int j = 0; j < n; j++)
//   {
//     arr[i][j]=0;
//   }
// }

// if(nQueen(arr,0,n)){
//   for (int i = 0; i < n; i++)
//   {
//   for (int j = 0; j < n; j++)
//   {
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
//   }

// }
//   return 0;
// }

//soln in vector

#include <bits/stdc++.h>
using namespace std;
#include <vector>

bool isSafe(vector<vector<int>> &board, int row_ref, int col_ref, int n)
{
  for (int row = 0; row < row_ref; row++)
  {
    if (board[row][col_ref] == 1)
    {
      return false;
    }
  }
  int row = row_ref;
  int col = col_ref;
  while (row >= 0 && col >= 0)
  {
    if (board[row][col] == 1)
    {
      return false;
    }
    row--;
    col--;
  }
  while (row >= 0 && col < n)
  {
    if (board[row][col] == 1)
    {
      return false;
    }
    row--;
    col++;
  }
  return true;
}
bool nQueen(vector<vector<int>> &board, int row, int n)
{
  if (row >= n)
  { //base condition
    return true;
  }
  for (int col = 0; col < n; col++)
  {
    if (isSafe(board, row, col, n))
    {
      board[row][col] = 1;
      if (nQueen(board, row + 1, n))
      {
        return true;
      }
    }
    board[row][col] = 0;
  }
  return false;
}

int main()
{
  int n;
  cout << "Enter n ";
  cin >> n;

  vector<vector<int>> vec;
  vector<vector<int>> res;
  // int **arr = new int*[n];

  for (int i = 0; i < n; i++)
  {
    vector<int> v1;
    for (int j = 0; j < n; j++)
    {
      v1.push_back(0);
    }
    vec.push_back(v1);
  }
  // for (int i = 0; i < n; i++)
  // {
  //   arr[i]=new int[n];
  //   for (int j = 0; j < n; j++)
  //   {
  //     arr[i][j]=0;
  //   }
  // }

  cout << "After placing queens-" << endl;
  if (nQueen(vec, 0, n))
  {
    for (int i = 0; i < vec.size(); i++)
    {
      for (int j = 0; j < vec[i].size(); j++)
      {
        cout << vec[i][j] << " ";
      }
      cout << endl;
    }
  }
  cout << "\n Printing only row no. where queens are placed (traversing in cols)" << endl;
  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = 0; j < vec[i].size(); j++)
    {
      if (vec[j][i] == 1)
      {
        cout << j + 1 << " ";
      }
    }
  }
  return 0;
}