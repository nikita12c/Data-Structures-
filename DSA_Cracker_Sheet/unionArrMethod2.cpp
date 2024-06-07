#include<iostream>
using namespace std;
#include<unordered_map>

//using unordered map //easy
//time : O(m+n)

int main(){
  int T,N,M;
  cout<<"Enter T"<<endl;
	cin>>T;
	while(T--){
  cout<<"Enter M N"<<endl;
	    cin>>N>>M;
	int A[N],B[M];

  unordered_map <int,int> map; //declare

  cout<<"Enter Array elements of A"<<endl;
	    for(int i=0;i<N;i++){
	      cin>>A[i];
        map[A[i]]++;
	    }
	    cout<<endl;
  cout<<"Enter Array elements of B"<<endl;
	    for(int i=0;i<M;i++){
	      cin>>B[i];
        map[B[i]]++;
	    }
	    cout<<endl;

      cout<<"Union is "<<map.size()<<endl;
  }
  return 0;
}