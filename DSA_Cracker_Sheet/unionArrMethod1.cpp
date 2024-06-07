#include <iostream>
using namespace std;
	//A = {2,5,3,6,8}
	//B = {1,3,7,2,9}
	//Union={2,5,3,6,8,1,7,9} //non repetative
//   Time Complexity : O(m + n)
// Handling duplicates in any of the array : Below code does not handle duplicates in any of the array. To handle the duplicates, just check for every element whether adjacent elements are equal.
// Below is the implementation of this approach.
int main() {
	int T,N,M;
  cout<<"Enter T"<<endl;
	cin>>T;
	while(T--){
  cout<<"Enter M N"<<endl;
	    cin>>N>>M;
	int A[N],B[M];
  cout<<"Enter Array elements of A"<<endl;
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    cout<<endl;
  cout<<"Enter Array elements of B"<<endl;
	    for(int i=0;i<M;i++){
	        cin>>B[i];
	    }
	    cout<<endl;

      cout<<"Union is"<<endl;
	    int Union[N+M];
int i=0,j=0,k=0;
      while(i<N && j<M){  //run the loop upto all elements of any one array will be exhausted
        if(A[i]<B[j]){    //smaller element is inserted in union first
          Union[k++]=A[i++];
        }
        else if(A[i]>B[j]){
          Union[k++]=B[j++];
        }
        else{             //if two elements are equal then insert any one of them in arrya and increment both the counter
          Union[k++]=B[j++];
          i++;
        }
      }
      // cout<<"K is"<<k<<endl;
    /* Print remaining elements of the larger array */
    while (i < N)
      {Union[k++]=A[i++];}

    while (j < M)
      {Union[k++]=B[j++];}

	    for(int i=0;i<k;i++){
	        cout<<Union[i]<<" ";
	    }
      cout<<endl<<"Count of elements "<<k<<endl;
	}
	return 0;
}
