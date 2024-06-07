#include<iostream>
using namespace std;
//Time: O(n)
int main() {
	  int T,N;
  cout<<"Enter T"<<endl;
	cin>>T;
	while(T--){
  cout<<"Enter M N"<<endl;
	    cin>>N;
	int a[N];

  cout<<"Enter Array elements of a"<<endl;
	    for(int i=0;i<N;i++){
	      cin>>a[i];
	    }
	   cout<<endl;

cout<<"Resulting array "<<endl;
int last=a[N-1];
for(int i=N-1;i>=1;i--){
    a[i]=a[i-1];
}
a[0]=last;

for(int i=0;i<N;i++){
	      cout<<a[i]<<" ";
	    }
			cout<<endl;
  }
	return 0;
}