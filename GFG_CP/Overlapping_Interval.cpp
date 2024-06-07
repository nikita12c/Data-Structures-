
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> , int );

// User code will be pasted here

int main()
{
    
    int t;
    cout<<"Enter test case"<<endl;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > arr,res;
        int n,x,y;
        cout<<"Enter n"<<endl;
        cin>>n;
cout<<"Enter pairs one by one "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
        }
        
        res = overlappedInterval(arr,n);
        
        for(int i=0;i<res.size();i++)
            cout << res[i].first << " " << res[i].second << " " ;
        cout<<endl;
    }
}
// } Driver Code Ends


//User function template for C++

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) {
    sort(vec.begin(),vec.end());
    int idx=0;
    for(int i=1;i<n;i++){  //from second element to end
        if(vec[idx].second >= vec[i].first){  //then merge
            vec[idx].second=max(vec[idx].second,vec[i].second);
        }
        else{
            idx++;
            vec[idx]=vec[i];
        }
    }
    vec.erase(vec.begin()+idx+1,vec.end());
    return vec;
}