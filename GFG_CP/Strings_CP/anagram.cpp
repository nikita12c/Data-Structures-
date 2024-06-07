//  Function to check if two strings are anagram a, b: input string

#include<iostream>
using namespace std;
#include<algorithm>

// Method-1   Time : O(nlogn)
// bool isAnagram(string a, string b){
//     int n1=a.length();
//     int n2=b.length();
//     if(n1!=n2){
//         return false;
//     }
//     sort(a.begin(),a.end());  //nlogn
//     sort(b.begin(),b.end());

//     for(int i=0;i<n1;i++){
//         if(a[i]!=b[i]){
//             return false;
//         }
//     }
// return true;
// }

// Method-2   Time : O(n) but Space :extra space for count arrays
// bool isAnagram(string str1, string str2){
//     int NO_OF_CHARS=256;
//     // Create 2 count arrays and initialize all values as 0
//     int count1[NO_OF_CHARS] = { 0 };
//     int count2[NO_OF_CHARS] = { 0 };
//     int i;
//     // For each character in input strings, increment count in the corresponding count array
//     for (i = 0; str1[i] && str2[i]; i++) {
//         count1[str1[i]]++;
//         count2[str2[i]]++;
//     }
//     // If both strings are of different length. Removing this condition will make the program fail for strings like "aaca" and "aca"
//     if (str1[i] || str2[i])
//         return false;
//     // Compare count arrays
//     for (i = 0; i < NO_OF_CHARS; i++)
//         if (count1[i] != count2[i])
//             return false;
// return true;
// }

// Method-3   Time : O(n) , Space :extra space for only 1 count arrays
// bool isAnagram(string str1, string str2){
//     int NO_OF_CHARS=256;
//     // Create 2 count arrays and initialize all values as 0
//     int count1[NO_OF_CHARS] = { 0 };
//     int i;
//     // For each character in input strings, increment count in the count array
//     for (i = 0; str1[i] && str2[i]; i++) {
//         count1[str1[i]]++;
//         count1[str2[i]]--;
//     }
//     // If both strings are of different length. Removing this condition will make the program fail for strings like "aaca" and "aca"
//     if (str1[i] || str2[i])
//         return false;
//    // See if there is any non-zero value in count array
//     for (i = 0; i < NO_OF_CHARS; i++)
//         if (count1[i])
//             return false;
// return true;
// }

// Method-4   Time : O(n) , Space : O(1)  find sum of both str nd compare sum
// bool isAnagram(string str1, string str2){
//     int sum1=0,sum2=0;
//     if(str1.size() != str2.size()){
//         return false;
//     }
//     for(int i=0;i<str1.size();i++){
//       sum1=sum1+str1[i];
//     }
//     for(int i=0;i<str2.size();i++){
//       sum2=sum2+str2[i];
//     }
//     if(sum1 !=sum2){
//         return false;
//     }
// return true;
// }
// Method-5  Time : O(n), Space : O(1)  find sum of 1 str nd then subract sum while traversing 2nd str  ,if it is finally 0 then it isAng
bool isAnagram(string str1, string str2){
    int sum1=0;
    if(str1.size() != str2.size()){
        return false;
    }
    for(int i=0;i<str1.size();i++){
      sum1=sum1+str1[i];
    }
    for(int i=0;i<str2.size();i++){
      sum1=sum1-str2[i];
    }
    if(sum1){ //if sum is non zero means not anagram
        return false;
    }
return true;
}

int main(){
  string s1="listen";
  string s2="silent";
  bool result=isAnagram(s1,s2);
  cout<<result<<endl;
  if(result){
      cout<<"Yes , anagram";
  }
  else{
      cout<<"No ,not anagram";
  }
  return 0;
}