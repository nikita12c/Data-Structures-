#include<bits/stdc++.h>
using namespace std;

vector<int> output;

  void solve(int src,vector<int> &vis,vector<int> adj[]){
    vis[src]=1;
    output.push_back(src);
    for(auto x:adj[src]){
        if(!vis[x]){
            solve(x,vis,adj);
        }
    }
	}
  
	vector<int>dfsOfGraph(int src,int V, vector<int> adj[]){
	   // output.clear();
	    vector<int> vis(V+1,0);
	    solve(src,vis,adj);
	    return output;
	}



int main(){
  int v,e; //v vertices and e edges
  cout<<"Enter vertices and edges"<<endl;
  cin>> v >> e ;
  vector<int> vec[v+1];

  cout<<"Enter edges one by one as (src dest) : \n";
  for (int i = 0; i < e; i++)  //entering edges by user
  {
    int src,dest;
    cin>>src>>dest;  //source vertice and destination vertice
    vec[src].push_back(dest);  //pushing dest vertice in src vertice vector/linkedlist
    // vec[dest].push_back(src); //if undirectional then we do this 
  }

  cout<<"Adjacency list representation of graph is : \n";
  for (int i = 1; i <=v ; i++)  //loop to print  (1 based indexing)
  {
    cout<<i<<" --> ";
    for (int j = 0; j < vec[i].size(); j++)
    {
      cout<<vec[i][j]<<"  -  ";
    }
    cout<<endl;
  }

//Call DFS
int src;
cout<<"Enter src : ";
cin>>src;
output=dfsOfGraph(src,v,vec);
cout<<"Output using DFS : ";

for (int i = 0; i < output.size(); i++)
{
 cout<<output[i]<<" ";
//  cout<<output.size()<<" ";
}

  return 0;
}