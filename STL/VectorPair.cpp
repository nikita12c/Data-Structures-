#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int,int> p1 , pair<int,int> p2){
 return (p1.first<p2.first);
}
bool mySecondCompare(pair<int,int> p1 , pair<int,int> p2){
 return (p1.second<p2.second);
}

void reduceLengthofArray(vector<int> &vec){
  vector<pair<int,int>> p;
  for(int i=0; i<vec.size();i++){
    p.push_back(make_pair(vec[i],i));
  }
  for(auto x:p){
    cout<<" ( ";
    cout<<x.first;
    cout<<" , ";
    cout<<x.second;
    cout<<" ) ";
  }
  sort(p.begin(),p.end(),myCompare);
  cout<<"\n After sort \n";
  for(auto x:p){
    cout<<" ( ";
    cout<<x.first;
    cout<<" , ";
    cout<<x.second;
    cout<<" ) ";
  }

  cout<<"\n After inserting se from 0 to .. \n";
int seq=0;
 for(int i=0;i<p.size();i++){
   p[i].first=seq;
   seq++;
 }

 sort(p.begin(),p.end(),mySecondCompare);
  for(auto x:p){
    cout<<" ( ";
    cout<<x.first;
    cout<<" , ";
    cout<<x.second;
    cout<<" ) ";
  }

}

int main(){
 vector<int> vec={10,16,7,14,5,3,12,9};
 reduceLengthofArray(vec);
  return 0;
}