#include <bits/stdc++.h>

using namespace std;

bool searchTheNumber(vector<vector<int>> &arr, int &num, int &n, int &m) {
	if (arr.size() == 0) {
		return false;
	}else {
		if (arr[0].size() == 0) {
			return false;
		}
	}
	int row = -1, l, h;
	for(int i=0; i<n; i++) {
		if (arr[i][0]<=num) {
			row = i ;
		} else {
			break;
		}
	}

	l = 0;
	h = m-1;

	if (row == -1) {
		return false;
	}

	while(l<=h) {
		int mid = (l+h)/2;
		if (arr[row][mid] == num) {
			return true;
		} else if(arr[row][mid] < num) {
			l = mid + 1;
		} else {
			h = mid - 1;
		}
	} 
	return false;

}

int main() {
	int n, m, num;
	cout<<"Enter the dimensions of the matrix\n";
	cin>>n>>m;
	vector<vector<int>> arr(m);

	cout<<"Enter the data of the matrix\n";

	for(int i=0; i<n; i++) {
		for(int j=0 ;j<m; j++) {
			cin>>num;
			arr[i].push_back(num);
		}
	}

	cout<<"Enter the number to be searched\n";
	cin>>num;

	if (searchTheNumber(arr, num, n, m)) {
		cout<<"true\n";
	} else {
		cout<<"false\n";
	}

	
}
