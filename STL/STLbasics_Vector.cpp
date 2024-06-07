#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void Print(vector<int> A){
  cout<<"Array is : ";
  // for(auto i=A.begin();i!=A.end();i++){
  //   cout<<*i<<"  ";
  // }
  //OR
  for(int i:A){
    cout<<i<<"  ";
  }
  cout<<endl;
}
//comparator function
bool f(int x,int y){
  return x>y;  //for decreasing order 
}

int main(){
  vector<int> A = {2,1,6,4};
  cout<<"Vector is like dynamic array"<<endl;
  cout<<"Printing array no. at a particular index :"<<endl;
  cout<<A[0]<<endl;
  cout<<A[3]<<endl;
  cout<<A.size()<<endl;
  Print(A);
  sort(A.begin(),A.end()); //O(NlogN) sorting complexity
  Print(A);
  //O(logN) Searching complexity
  bool present=binary_search(A.begin(),A.end(),4);
  cout<<present<<"  ";
   present=binary_search(A.begin(),A.end(),10);
  cout<<present<<"  ";
   present=binary_search(A.begin(),A.end(),1);
  cout<<present<<"  "<<endl;
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(123);
  A.push_back(125);
  A.push_back(125);
  A.push_back(126);
  Print(A);
  vector<int>::iterator it=lower_bound(A.begin(),A.end(),100);  //  >=
  cout<<"Iterator is "<<*it<<endl;
  vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100); //  >
  cout<<"Iterator is "<<*it2<<endl;
  //we can do arithmetic operation on iterators ..
  //we can find how many times a no. is repeated in sorted array
  cout<<"Differece "<<it2-it<<endl;  
  vector<int>::iterator it3=lower_bound(A.begin(),A.end(),125);  //  >=
  cout<<"Iterator is "<<*it3<<endl;
  vector<int>::iterator it4=upper_bound(A.begin(),A.end(),125); //  >
  cout<<"Iterator is "<<*it4<<endl;  //means 4 no. of 100 are present 
  cout<<"Differece "<<it4-it3<<endl;  //means 2 no. of 125 are present

//   vector<int>::iterator it4=upper_bound(A.begin(),A.end(),125); This can also be written in shortcut
//   auto it4=upper_bound(A.begin(),A.end(),125); using auto only


//we can also sort in reverse order
//we will sort the array in descending order
sort(A.begin(),A.end(),f);
cout<<"Reverse is ";
Print(A);
  return 0;
}
