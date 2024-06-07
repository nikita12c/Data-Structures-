#include<iostream>
#include<vector>
// #define int long long int
using namespace std;

void inputAdjacencyList(int e,vector<int> vec[],bool Isundirected){
    cout<<"Enter edges one by one as (src dest) : \n";
  for (int i = 0; i < e; i++)  //entering edges by user
  {
    int src,dest;
    cin>>src>>dest;  //source vertice and destination vertice
    vec[src].push_back(dest);  //pushing dest vertice in src vertice vector/linkedlist
    if(Isundirected){
     vec[dest].push_back(src); //if undirectional then we do this
    }
  }
}
void printAdjacencyList(int v,vector<int> vec[],int src){
  for (int i = src; i <v ; i++)  //loop to print  (1 based indexing)
  {
    cout<<i<<" --> ";
    for (int j = 0; j < vec[i].size(); j++)
    {
      cout<<vec[i][j]<<"  -  ";
    }
    cout<<endl;
  }
}

int main(){
  int v,e; //v vertices and e edges
  cout<<"Is your graph undirected ? : ";
  bool Isundirected;
  cin>>Isundirected;
  cout<<"Enter vertices and edges"<<endl;
  cin>> v >> e ;
  cout<<"Enter source : ";
  int src;
  cin>>src;
  vector<int> vec[v+1];
  inputAdjacencyList(e,vec,Isundirected);
  cout<<"Adjacency list representation of graph is : \n";
  printAdjacencyList(v,vec,src);
  return 0;
}