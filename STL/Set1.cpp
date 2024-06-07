#include <iostream>
#include <map>
using namespace std;
#include<set>

int main(){
 // Question 
 //some intervals are given [x,y] nd i want to find that interval which contain a particular no.
 //ex: add[2,4]
 //add [30,400]
 //add [401,450]   we are assuming no complex cases like overlappping
 //now give me the interval 402 

set<pair<int,int>> S;
S.insert({30,400});
S.insert({2,4});
S.insert({401,450});
//as this is set pairs will be inserted in ascending order itself
//the values in the pair {x,y} can be accessed using S.first nd S.second
for(auto i:S)
  cout<<i.first<<" to "<<i.second<<" ,  ";
cout<<endl;
//2 to 4 ,  30 to 400 ,  401 to 450 is o/p
//pair {a,b} is smaller than pair {c,d} iff a<c or if a==b then b<d

int searchVal=2;
auto it =S.upper_bound({searchVal,INT_MAX}); //will give strickly greater than 50 ie {40,450} pair
//it is pointing to pair {40,450} now
it--;
//it is pointing to pair {30,400} now
pair <int,int> current = *it;
//now current will store that pair
if(current.first<=searchVal && current.second>=searchVal){
  cout<<"YES, it is present in "<<current.first<<" to "<<current.second<<" ,  ";
}
else{
  cout<<"No, it is not present in given interval";
}
  return 0;
}

//if searchVal<2
//then we have to add a base codition that
// if(it==S.begin()){
  // ....
// }