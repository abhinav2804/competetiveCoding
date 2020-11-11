#include <bits/stdc++.h> 

using namespace std;

void mergify(vector<int>& arr, int l, int mid, int h) {

	int i = l, j = mid+1;
	vector<int> left, right;

	while (i<j) {
		left.push_back(arr[i]);
		i++;
	}	

	while (j<=h) {
		right.push_back(arr[j]);
		j++;
	}

	i=0;
	j=0;
	int k=l;

	while (i < left.size() && j<right.size()) {

		if (left[i] <= right[j]) {
			arr[k] = left[i];
			i++;
		} else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}

	while (i<left.size()) {
		arr[k] = left[i];
		k++;
		i++;
	}

	while (j<right.size()) {
		arr[k] = right[j];
		k++;
		j++;
	}

}

void mergeSort(vector<int>& arr, int l, int h) {
	if (l < h) {
		int mid = (l+h)/2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, h);
		mergify(arr, l, mid, h);
	}
}

int main() {
	int n, num;
	vector<int> arr;

	cout<<"Enter size\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(int i = 0; i< n; i++) {
		cin>>num;
		arr.push_back(num);
	}

	mergeSort(arr, 0, n-1);
	for (int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}
