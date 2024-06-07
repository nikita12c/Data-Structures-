#include<iostream>
#include<vector>
// #define int long long int
using namespace std;

int main(){
  int v,e; //v vertices and e edges
  cout<<"Enter vertices and edges"<<endl;
  cin>> v >> e ;
  vector<int> vec[v+1];
  int arr[v][v];

  for (int i = 0; i < v; i++) //initialize whole matrix with 0
  {
    for (int j = 0; j < v; j++)
    {
      arr[i][j]=0;
    }
  }
  cout<<"Enter edges one by one as (src dest) : \n";
  for (int i = 0; i < e; i++)
  {
      int src,dest;
      cin>>src>>dest; //entering edges by user
      arr[src][dest]=1; //storing 1 at edge vertice
      arr[dest][src]=1;
  }

  cout<<"Adjacency Matrix(6x6) representation of graph is : \n";
  for (int i = 1; i <=v ; i++)  //loop to print (1 based indexing)
  {
    cout<<i<<" --> ";
    for (int j = 1; j <=v; j++)
    {
      cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
  }

  return 0;
}