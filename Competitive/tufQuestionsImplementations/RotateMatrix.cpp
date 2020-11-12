#include <bits/stdc++.h> 

using namespace std;

void rotateMatrix(vector<vector<int>> & arr, int n) {
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++){
			swap(arr[i][j], arr[j][i]);
		}
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n/2; j++) {
			swap(arr[i][j],arr[i][n-j-1]);
		}
	}

}

int main() {
	int n, num;
	cout<<"Enter the size of matrix\n";
	cin>>n;
	cout<<"Enter the elements now\n";
	vector<vector<int>> arr(n);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin>>num;
			arr[i].push_back(num);
		}
	}

	rotateMatrix(arr, n);

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
		//	cin>>num;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
