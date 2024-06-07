#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	cout << reverseWord(s) << endl;
	}
	return 0;
}
// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    int length=str.length();
    // cout<<length<<endl;
    for(int i=0;i<length/2;i++){
        char temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
    return str;
  //Your code here
  //Time compl-- n/2
}