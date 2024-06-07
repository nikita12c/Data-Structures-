#include <iostream>
#include <map>
using namespace std;

int main(){

  map<string,int> map1;

    map1["abc"]=100;    // inserts key = "abc" with value = 100
    map1["b"]=200;      // inserts key = "b" with value = 200
    map1["c"]=300;      // inserts key = "c" with value = 300
    map1["def"]=400;    // inserts key = "def" with value = 400

    map<int,int> map2{{1,10},{2,20},{3,30},{4,40}};  //int to int mapping

    map<char,int> map3;
    //initializing
    map3['a']=101;
    map3['b']=202;
    map3['c']=303;

//printing mapping
for(auto it:map3){
  cout<<it.first<<" ==> "<<it.second<<endl;
}

//to find how many times a char ocuur in my name
map<char,int> map4;

string Str="nikita chaudhari";

for(char c : Str){
  map4[c]++;
}

cout<<map4['i'] <<"  "<<map4['a'] << "  "<<map4['c'];
//printing mapping of char to int .....counts of every emlement will print
for(auto it:map4){
  cout<<it.first<<" ==> "<<it.second<<endl;
}
  return 0;
}