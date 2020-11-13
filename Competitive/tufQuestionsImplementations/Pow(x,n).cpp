#include <bits/stdc++.h> 

using namespace std;

double myPow(int n, int x) {
	
	double ans = 1;
	long nn = n;

	if (n < 0) {
		nn = -1 * nn;
	}

	while (nn>0) {
		if (nn % 2 == 0) {
			x = x * x;
			nn = nn / 2;
		} else {
			ans = ans * x;
			nn--;
		}
	}

	if (n < 0) {
		ans = 1/ans;
	}

	return ans;
}

int main() {
	int n, x;
	cout<<"Enter the number and the power \n";
	cin>>n>>x;
	double ans = myPow(n,x);
	cout<<ans;
	return 0;
}
