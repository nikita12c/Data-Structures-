#include <iostream>
#include<vector>
using namespace std;

//Find kth element of spiral matrix  Time Complexity: O(N*M) : Space Complexity: O(N*M) for new spiral 1D vector 
int findK(int A[4][4], int n, int m, int k)
    {
        int er=n-1,ec=m-1;
        int sr=0,sc=0;
        vector<int>a;
        while(sr<=er && sc<=ec){
            for(int i=sc; i<=ec;i++){ //printing first row
                a.push_back(A[sr][i]);
            }
            sr++;

            for(int i=sr; i<=er;i++){ //printing last col
                a.push_back(A[i][ec]);
            }
            ec--;
            if(sr<=er){
            for(int i=ec; i>=sc;i--){ //printing last row
                a.push_back(A[er][i]);
            }
            er--;
            }

            if(sc<=ec){
            for(int i=er; i>=sr;i--){ //printing first col
                a.push_back(A[i][sc]);
            }
            sc++;
            }
        }
        return a[k-1];  //for 0 base indexing
}

//Print spiral matrix Time Complexity: O(N*M)
void printSpiral(int a[4][4], int n, int m)
    {
        int er=n-1,ec=m-1;
        int sr=0,sc=0;
        while(sr<=er && sc<=ec){
            for(int i=sc; i<=ec;i++){ //printing first row
                cout<<a[sr][i]<<" ";
            }
            sr++;

            for(int i=sr; i<=er;i++){ //printing last col
                cout<<a[i][ec]<<" ";
            }
            ec--;
            if(sr<=er){
            for(int i=ec; i>=sc;i--){ //printing last row
                cout<<a[er][i]<<" ";
            }
            er--;
            }
            
            if(sc<=ec){
            for(int i=er; i>=sr;i--){ //printing first col
                cout<<a[i][sc]<<" ";
            }   
            sc++;
            }
        }
    }

int main()
{
	// int arr[3][6] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int n = 4,m=4;
	printSpiral(arr,n,m);

    int k=8; //which is 8th element in spriral matrix
    int res=findK(arr,n,m,k);
    cout<<endl;
    cout<<k<<"th element is = "<<res;
	return 0;
}
