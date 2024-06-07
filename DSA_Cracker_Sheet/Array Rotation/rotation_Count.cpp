#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	  if(arr[0] < arr[n-1]){
		return 0;
	}

	int pivot = -1;
	int s = 0, e = n-1;
	while(s <= e){
    if(arr[s] <= arr[e]){
      return s;
    }
		int mid = s + (e-s)/2;
		int next = (mid+1)%n;
		int prev = (mid-1+n)%n;
		if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
      pivot = mid;
		      break;
		}
		if(arr[s] <= arr[mid]){
     s = mid + 1;
		}
		else if(arr[mid] <= arr[e]){
			e = mid - 1;
		}
	}

	return pivot;
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}