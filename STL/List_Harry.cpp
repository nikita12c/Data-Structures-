#include<iostream>
using namespace std;
#include<list>

void display(list<int> &lst){
list<int> :: iterator itr;
for(itr=lst.begin(); itr!=lst.end();itr++){
  cout<<*itr<<"  ";
}
cout<<endl;
}

int main(){
list<int> list1; //list of length 0
list1.push_back(5);
list1.push_back(2);
list1.push_back(10);
list1.push_back(1);
list1.push_back(1);
list1.push_back(23);
display(list1);

//Removal code
// list1.pop_back();  //remove element from back 
// display(list1);
// list1.pop_front();  //remove element from front
// display(list1);
//to remove any element from within the list
// list1.remove(1); 
// display(list1);

//Sorting
list1.sort();
display(list1);

list<int> list2(3); //list of length 3
list<int> :: iterator itr2=list2.begin();
*itr2=10;
itr2++;
*itr2=30;
itr2++;
*itr2=20;
itr2++;
display(list2);

//Merging two list
list1.sort();
list2.sort();
list1.merge(list2);
display(list1);

//Reversing
list1.reverse();
display(list1);
return 0;
}