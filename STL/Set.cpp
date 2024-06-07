#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> S;
S.insert(1); //logN time
S.insert(-1);
S.insert(3);
S.insert(2);
S.insert(5);
S.erase(5); //logN time
for(int i:S)
  cout<<i<<"  ";
cout<<endl;

//find element is present or not , If it finds the element then it returns an iterator pointing to the element otherwise, it returns an iterator pointing to the end of the set i.e. set::end()
auto it = S.find(2);
if(it==S.end()){
  cout<<"not present"<<endl;
}
else{
   cout<<"present and its value is "<<*it<<endl;
}

//want to find elemnt strickly greater than 1
auto it2=S.upper_bound(1);
auto it3=S.upper_bound(2);
cout<<*it2<<"  "<<*it3<<endl;
auto it4=S.upper_bound(3);
if(it4==S.end()){
  cout<<"no upper bound for this element"<<endl;
}

return 0;
}