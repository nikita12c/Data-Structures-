/*
Ques:- Given a weighted, undirected and connected graph. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.
Concept:- 1)Sort the graph edges with respect to their weights.
          2)Start adding edges to the MST from the edge with the smallest weight until the edge of the largest weight.
          3)Only add edges which doesn't form a cycle , edges which connect only disconnected components.
          4)Here we will use DSU(Disjoint Set Union) path compression technique to even reduce more time
 Time - O(V * logV)
*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void display_vectorOfPairs(int e,vector<pair<int,pair<int,int>>> vec){
  cout<<"\n  src dest weight\n";
  for (int i = 0; i < e; i++)
  {
    cout<<vec[i].second.first<<"   ";
    cout<<vec[i].second.second<<"   ";
    cout<<vec[i].first<<endl;
  }
}
int findParent(int v,int parent[]){
 if(parent[v] == v){
   return v;
 }
 return findParent(parent[v],parent);
}
void uni(int src,int dest,int parent[]){  //DSU union
 int a=findParent(src,parent);
 int b=findParent(dest,parent);
 parent[dest]=src;
}
int kruskal(vector<pair<int,pair<int,int>>> vec,int e,int v){
vector<pair<int,pair<int,int>>> mst; //to store edges of MST output
 sort(vec.begin(),vec.end()); //sorting the given e no. of edges
 int cost=0;
 int parent[v];
  for (int i = 0; i < v; i++) //making singleton set in DSU
  {
    parent[i]=i; //initializing every vertex as its own parent
  }
  int OutputMSTEdges=0; //output MST will contain v-1 edges
  for(int i=0;i<vec.size();i++){ //travel through given i/p edges
    int src=vec[i].second.first;
    int dest=vec[i].second.second;
    int weight=vec[i].first;
    if(findParent(src,parent) != findParent(dest,parent)){//is cyclye not found we can add that edge in our MST
      cost=cost+weight;
      mst.push_back(make_pair(weight,make_pair(src,dest)));//to push edges into MST
      uni(src,dest,parent); //than union them to make spannin tree
    }
  }
cout<<"\nMinimum Spanning Tree will be:\n";
display_vectorOfPairs(v-1,mst); //to print output MST which will contain v-1 edges
return cost;
}
int main()
{
  int v,e;
  cout<<"Enter no. of vertices"<<endl;
  cin>>v;
  cout<<"Enter no. of edges"<<endl;
  cin>>e;
  vector<pair<int,pair<int,int>>> vec;
  cout<<"Enter source destination weight one by one"<<endl;
  for (int i = 0; i < e; i++)
  {
    int src,dest,weight;
    cin>>src>>dest>>weight;
    vec.push_back(make_pair(weight,make_pair(src,dest))); //OR  // vec.push_back({weight,{src,dest}});
  }
  cout<<"\nVector Pairs are :\n";
  display_vectorOfPairs(e,vec);
  int minCost;
  minCost=kruskal(vec,e,v);
  cout<<"\nCost of MST : "<<minCost;
  return 0;
}
