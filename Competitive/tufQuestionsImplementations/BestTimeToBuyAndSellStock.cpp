#include <bits/stdc++.h>

using namespace std;

int maximumProfit(vector<int> &arr) {
	int low=-1, high=-1, maxProf = -1;
	low = arr[0];
	for (int i=1; i<arr.size(); i++){
		if (arr[i] < low) {
			low = arr[i];
		} else if (arr[i] >= high) {
			high = arr[i];
			int temp = high - low;
			if (temp > maxProf) {
				maxProf = temp;
			}
		}
	}
	if (maxProf == -1) {
		return 0;
	}
	return maxProf;
}

int main() {
	int n, num;
	vector<int> arr;

	cout<<"Enter the number of days\n";
	cin>>n;
	cout<<"Enter the price\n";
	for (int i=0; i<n; i++) {
		cin>>num;
		arr.push_back(num);
	}
	cout<<maximumProfit(arr);
	return 0;
}
