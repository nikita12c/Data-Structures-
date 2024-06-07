// C++ program to rotate an array by d elements
// Time complexity : O(n * d)
// Auxiliary Space : O(1)

#include <iostream>
using namespace std;

/*Function to left Rotate arr[] of size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[i] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return(gcd(b,a%b));
	}
}

//Juggling algo  Time: O(n) Space: O(1)
void rotateLeft(int arr[], int d, int n){
 int k=-1,j,temp;
 int g_c_d = gcd(d,n);
 for (int i = 0; i < g_c_d; i++)
 {
	 temp = arr[i];
	 j = i;
		while(1){  //inner loop
			k = (j+d)%n ;
				if(k==i){
					break;	
				}
			arr[j] = arr[k];  //shift element to left
			j = k;
		}
	arr[j] = temp;
 }
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// leftRotate(arr, 2, n);
	// rotateLeft(arr, 8, n);
	rotateLeft(arr, 4, n);
	printArray(arr, n);

	return 0;
}
