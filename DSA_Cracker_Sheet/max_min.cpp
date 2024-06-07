#include <iostream>
using namespace std;
#include<climits>

//method1
int main() {
	//code
    int T;
    cout<<"Enter Test Cases"<<endl;
    cin >> T; //Testcases  
    while(T--) //run 2 times
    {
        int n;
        cout<<"Enter size of array"<<endl;
        cin >> n;
        int mini = INT_MAX;  
        int maxi = INT_MIN;
        //we can compare with the maxint using this inbuilt var OR we can also initialize first nd second as max nd min 
        cout<<"Enter elements of array"<<endl;
        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mini = min(mini, num);
            maxi = max(maxi, num);
        }
        cout <<"Max is "<< maxi << " " <<"Min is "<< mini << endl;
    }
	return 0;
}

//method2 -O(n) time
// C++ program of above implementation 
// #include<iostream>
// using namespace std;

// struct Pair 
// {
// 	int min;
// 	int max;
// }; 

// struct Pair getMinMax(int arr[], int n)
// {
// 	struct Pair minmax;	 
// 	int i;

// 	if (n == 1)
// 	{
// 		minmax.max = arr[0];
// 		minmax.min = arr[0];	 
// 		return minmax;
// 	} 
// 	if (arr[0] > arr[1]) 
// 	{
// 		minmax.max = arr[0];
// 		minmax.min = arr[1];
// 	} 
// 	else
// 	{
// 		minmax.max = arr[1];
// 		minmax.min = arr[0];
// 	} 
	
// 	for(i = 2; i < n; i++)
// 	{
// 		if (arr[i] > minmax.max)	 
// 			minmax.max = arr[i];
			
// 		else if (arr[i] < minmax.min)	 
// 			minmax.min = arr[i];
// 	}
// 	return minmax;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1000, 11, 445, 
// 				1, 330, 3000 };
// 	int arr_size = 6;
	
// 	struct Pair minmax = getMinMax(arr, arr_size);
	
// 	cout << "Minimum element is "
// 		<< minmax.min << endl;
// 	cout << "Maximum element is "
// 		<< minmax.max;
		
// 	return 0;
// } 
// In this method, the total number of comparisons is 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case. 
// In the above implementation, the worst case occurs when elements are sorted in descending order and the best case occurs when elements are sorted in ascending order.

