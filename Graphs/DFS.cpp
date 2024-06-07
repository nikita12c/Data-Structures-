#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
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
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	   // output.clear();
	    vector<int> vis(V,0);
	    solve(0,vis,adj);
	    return output;
	   
	}
};