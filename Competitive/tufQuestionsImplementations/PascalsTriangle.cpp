#include <bits/stdc++.h>

using namespace std;

vector<int> pascalTriangle(int & n) {
	cout<<"In function\n";
	//vector<vector<int>> ans(n+1);
	vector<int> ans;
	for (int i=0; i<= n ;i++) {
		vector<int> prev;
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				prev.push_back(1);
			} else {
				prev.push_back(ans[j-1] + ans[j]);
			}
		}
		ans = prev;
	}
	return ans;
}

int main() {

	int n;
	cin>>n;
	cout<<"Before function\n";
//	vector<vector<int>> ans(n+1);
	vector<int> ans;
	ans = pascalTriangle(n);
	cout<<"ANSWER IS \n";
	for (int i = 0; i<=n; i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
