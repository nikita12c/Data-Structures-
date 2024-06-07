#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
  map<string,int> marksMap;
  marksMap["Nikita"] = 98;
  marksMap["Andrie"] = 50;
  marksMap["Phoebe"] = 38;
//using insert
marksMap.insert({{"Joey",44},{"Ross",20}});

// make iterator
map<string,int> :: iterator itr;
for(itr=marksMap.begin(); itr!=marksMap.end(); itr++){
  cout<<(*itr).first<<"  "<<(*itr).second<<endl;
}
//OR shortcut to print
// for(auto x:marksMap){
//   cout<<(x).first<<"  "<<(x).second<<endl;
// }

cout<<"Size is  "<<marksMap.size()<<endl;
cout<<"MAX size is  "<<marksMap.max_size()<<endl;
cout<<"IsEmpty return value is  "<<marksMap.empty()<<endl;

  return 0;
}