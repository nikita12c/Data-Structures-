#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    vector<int> output;
	    vector<int> visitedArr(V,0);
	    queue <int> q;
	    q.push(0);
	    visitedArr[0]=1;
	    while(!q.empty()){
	        int td = q.front();
	        q.pop();
	        output.push_back(td);
	        for(auto x:adj[td]){
	            if(!visitedArr[x]){
	                visitedArr[x]=1;
	                q.push(x);
	            }
	        }
	    }
	    return output;
	}
};