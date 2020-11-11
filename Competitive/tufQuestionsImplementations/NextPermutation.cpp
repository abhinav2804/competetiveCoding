#include <bits/stdc++.h>

using namespace std;

void swapTheArr(vector<int> &arr, int n) {
	int end = arr.size()-1;
	for (int i = n; i < end; i++) {
		swap(arr[i],arr[end]);
		end -- ;
		//cout<<"Here\n";
	}
}

vector<int> nextPermutation(vector<int> arr, int n) {
	bool flag = false;
	int i;
	for(i = n-1; i > 0; i--) {
		if (arr[i] > arr[i-1]) {
			flag = true;
			break;
		}
	}

	if (flag) {
		int temp = arr[i-1], j;
		for (j = i; j < n ; j++) {
			if (arr[j] <= temp) {
				break;
			}
		}
		j--;
		swap(arr[j],arr[i-1]);
		swapTheArr(arr, i);
	} else {
		//cout<<"False\n";
		swapTheArr(arr, 0);
	}
	return arr;
}

int main() {
	vector<int> arr;
	int inp,n;
	cout<<"Enter the number of digits in the numbers\n";
	cin>>n;
	cout<<"Enter the digits of the number:\n";
	for(int i=0; i<n; i++) {
		cin>>inp;
		arr.push_back(inp);
	}
	arr = nextPermutation(arr, n);
	for(int i=0; i<n; i++) {
		cout<<arr[i];
	}
}
