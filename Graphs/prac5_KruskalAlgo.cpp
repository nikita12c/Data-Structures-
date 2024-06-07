#include<iostream>
#include<algorithm>
using namespace std;

class Edge {
  public:
   int source;
   int destination;
   int weight;
};

bool compare(Edge e1 ,Edge e2){
  return e1.weight < e2.weight;
}

int findParent(int v,int *parent){
  if(parent[v] == v){
    return v;
  }
  return findParent(parent[v],parent);
}

void kruskals(Edge *input,int v,int e){
  //sort input array in ascending order based on weight
  sort(input,input+e,compare);
  Edge *output = new Edge[v-1];
  int *parent = new int[v];
  for (int i = 0; i < v; i++)
  {
    parent[i]=i;
  }

  int count=0;
  int i=0;
  while(count!=v-1){
    Edge currentEdge = input[i];
    //check if can add current in MST or not
    int sourceParent=findParent(currentEdge.source,parent);
    int destinationParent=findParent(currentEdge.destination,parent);
    
    if(sourceParent!=destinationParent){
      output[count] = currentEdge;
      count++;
      parent[sourceParent]=destinationParent;
    }
    i++;
  }
cout<<"Following are the edges in the constructed MST"<<endl;
for (int i = 0; i < v-1; i++)
{
  if(output[i].source<output[i].destination){
  cout<<output[i].source<<" -- "<<output[i].destination<<"  == "<<output[i].weight<<endl;
  }
  else{
  cout<<output[i].destination<<" -- "<<output[i].source<<" == "<<output[i].weight<<endl;
  }
}

int minimumCost = 0;
    for (i = 0; i < v-1; i++)
    {
        minimumCost = minimumCost + output[i].weight;
    }
    cout << "Minimum Cost Spanning Tree: " << minimumCost<< endl;
}

int main(){
  int v,e;
  cout<<"Enter no. of vertices"<<endl;
  cin>>v;
  cout<<"Enter no. of edges"<<endl;
  cin>>e;
  Edge *input = new Edge[e]; //on every element of input array there is obj of edge class
  cout<<"Enter source destination weight one by one"<<endl;
  for (int i = 0; i < e; i++)
  {
    int s,d,w;
    cin>>s>>d>>w;
    input[i].source=s;
    input[i].destination=d;
    input[i].weight=w;
  }
  kruskals(input,v,e);
  
}