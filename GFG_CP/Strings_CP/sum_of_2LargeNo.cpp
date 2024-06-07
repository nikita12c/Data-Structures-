// Time  Complexity : O(m+n) where m and n are size of two strings
#include<iostream>
using namespace std;
#include<algorithm>

string AddStrings(string s1,string s2){
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());
int m=s1.size();
int n=s2.size();
string result="";
int i=0,j=0;
int carry=0;
while(i<m && j<n){
  int x = s1[i] - '0';  //convert char to int
  int y = s2[j] - '0';
  int sum = x+y+carry;
  int ans = sum % 10;
  carry = sum / 10;
  char ans_str = ans + '0';   //convert unit place to char and then append to result
  result=result+ans_str;
  i++;j++;
}
while(i<m){  //if s1 is large then this is code for remaining elements
  int x = s1[i] - '0';
  int sum = x+carry;
  int ans = sum % 10;
  carry = sum / 10;
  char ans_str = ans + '0';
  result=result+ans_str;
  i++;
}
while(j<n){  //if s1 is large then this is code for remaining elements
  int y = s2[j] - '0';
  int sum = y+carry;
  int ans = sum % 10;
  carry = sum / 10;
  char ans_str = ans + '0';
  result=result+ans_str;
  j++;
}
if(carry==1){ //eg if 999+1 then here extra carry at last is produced thus we add it //and that carry never be more than 1
  result=result+'1';
}
reverse(result.begin(),result.end());
return result;
}

int main(){
  string s1="7682";
  string s2="137";
  // string s1="999";
  // string s2="1";
  string result=AddStrings(s1,s2);
  cout<<result;
  return 0;
}


//not working
// Optimization:
// We can avoid the first two string reverse operations by traversing them from end. Below is optimized solution.
// #include<iostream>
// using namespace std;
// #include<algorithm>

// string AddStrings(string s1,string s2){
// reverse(s1.begin(),s1.end());
// reverse(s2.begin(),s2.end());
// int m=s1.size();
// int n=s2.size();
// string result="";
// int i=m-1,j=n-1;
// int carry=0;
// while(i<=0 && j<=0){
//   int x = s1[i] - '0';  //convert char to int
//   int y = s2[j] - '0';
//   int sum = x+y+carry;
//   int ans = sum % 10;
//   carry = sum / 10;
//   char ans_str = ans + '0';   //convert unit place to char and then append to result
//   result=result+ans_str;
//   i--;j--;
// }
// while(i<=0){  //if s1 is large then this is code for remaining elements
//   int x = s1[i] - '0';
//   int sum = x+carry;
//   int ans = sum % 10;
//   carry = sum / 10;
//   char ans_str = ans + '0';
//   result=result+ans_str;
//   i--;
// }
// while(j<=0){  //if s1 is large then this is code for remaining elements
//   int y = s2[j] - '0';
//   int sum = y+carry;
//   int ans = sum % 10;
//   carry = sum / 10;
//   char ans_str = ans + '0';
//   result=result+ans_str;
//   j--;
// }
// if(carry==1){ //eg if 999+1 then here extra carry at last is produced thus we add it //and that carry never be more than 1
//   result=result+'1';
// }
// reverse(result.begin(),result.end());
// return result;
// }

// int main(){
//   string s1="7682";
//   string s2="137";
//   // string s1="999";
//   // string s2="1";
//   string result=AddStrings(s1,s2);
//   cout<<result;
//   return 0;
// }