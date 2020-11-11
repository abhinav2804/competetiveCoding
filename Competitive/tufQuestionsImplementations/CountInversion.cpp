#include <bits/stdc++.h>

using namespace std;
/*
   							BRUTE FORCE


int previousGreaterNumbers(vector<int> & sortedArr, int num) {
	int l = 0, h = sortedArr.size(), mid, ans = 0;
	while (l <= h) {
		mid = (l+h)/2;
		if (sortedArr[mid] > num) {
			h = mid - 1;
		} else if(sortedArr[mid] == num) {
			break;
		} else {
			l = mid + 1;
		}
	}

	if (sortedArr[mid] > num) {
		while (mid != sortedArr.size()) {
			ans ++;
			mid ++;
		}
	} else if (sortedArr[mid] <= num ) {
		while (sortedArr[mid] <= num ){
			mid ++;
		}

		while (mid != sortedArr.size()) {
			ans ++;
			mid ++;
		}
	}
		
	sortedArr.push_back(num);
	sort(sortedArr.begin(), sortedArr.end());

	return ans;
}

int countInversions(vector<int> &arr, int n) {
	vector<int> sortedArr;
	sortedArr.push_back(arr[0]);
	int ans = 0;

	for (int i=1; i<n; i++) {
		ans = ans + previousGreaterNumbers(sortedArr, arr[i]);	
	}

	return ans;
}

*/

int mergify(vector<int>& arr, int l, int mid, int h) {
	int i = l, j = mid+1, ans  = 0, k;
	vector<int> left, right;
	//cout<<"Left ";
	while (i <= mid) {
		left.push_back(arr[i]);
	//	cout<<arr[i]<<" ";
		i++;
	}
	//cout<<endl;

	//cout<<"Right ";
	while (j <= h) {
	//	cout<<arr[j]<<" ";
		right.push_back(arr[j]);
		j++;
	}

	//	cout<<endl;
	i=0;
	j=0;
	k=l;

	while (i < left.size() && j < right.size()) {
		if (right[j] < left[i]) {
			//cout<<right[j]<<endl;
			ans += left.size() - i;
			arr[k] = right[j];
			k++;
			j++;
		} else if (right[j] >= left[i]) {
			arr[k] = left[i];
			i++;
			k++;
		}
	}

	while (i < left.size()) {
		arr[k] = left[i];
		i++;
		k++;
	}

	while (j < right.size()) {
		arr[k] = right[j];
		j++;
		k++;
	}

	return ans;
}

int countInversions(vector<int>& arr, int l, int h) {
	int ans=0;
	if (l < h) {
		int mid = (l+h)/2;
		ans += countInversions(arr, l, mid);
//		cout<<"-> "<<ans<<endl;
		ans += countInversions(arr, mid+1, h);
//		cout<<"-> "<<ans<<endl;
		ans = ans + mergify(arr, l, mid, h);
//		cout<<"-> "<<ans<<endl;
	}
	//cout<<"Inside countInversions\n";
	/*for (int i = l; i< h; i++) {
		cout<<arr[i]<<" ";
	}*/
	return ans;
}

int main() {
	int n, num;
	vector<int> arr;
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for (int i= 0; i<n; i++) {
		cin>>num;
		arr.push_back(num);
	}

	cout<<countInversions(arr,0,n-1)<<endl;
/*	for (int i = 0; i< arr.size(); i++) {
		cout<<arr[i]<<" ";
	}*/
}
