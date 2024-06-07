#include<iostream>
#include<vector>
using namespace std;

int main() {
	//code
		int T,N;
    cout<<"Enter Test Cases \n";
    cin>>T;
	while(T--){
    cout<<"Enter no. of elements \n";
	  cin>>N;
    cout<<"Enter Array elements \n";
		int A[N];
	  for(int i=0;i<N;i++){
	    cin>>A[i];
	  }
	  cout<<endl;
cout<<"Resulting \n";
   vector<int> pos;
	    vector<int> neg;
	    for(int i=0;i<N;i++){
	        if(A[i]<0){
	            neg.push_back(A[i]);
							cout<<"NEgs "<<A[i]<<"  "<<endl;
	        }
	        else{
	            pos.push_back(A[i]);
	        }
	    }
	    int j=0;
	    for(int i=0;i<pos.size();i++){
	        A[i]=pos[j];
	        j++;
					// cout<<A[i]<<" ";
	    }
	    j=0;
			// cout<<"POS SIZE "<<pos.size()<<" "<<neg.size()<<endl;
	    for(int i=pos.size();i<(pos.size()+neg.size());i++){
	        A[i]=neg[j];
	        j++;
	        // cout<<A[i]<<" ";
	    }
	   
  cout<<"ResultingArray is"<<endl;
	  for(int i=0;i<N;i++){
	     cout<<A[i]<<" ";
	  }	
	  cout<<endl;
	}
	return 0;
}


//not working
	// int i=0,j=1;
	// for(int k=0;k<N-1;k++){
	//     if((A[i]<0 && A[j]<0) || (A[i]>0 && A[j]>0)){
	//         i++;j++;
	//     }
	//     if((A[i]<0 && A[j]>0) || (A[i]>0 && A[j]<0)){
	//         swap(A[i],A[j]);
	//     }
	//     i++;
	//     j++;
	// }