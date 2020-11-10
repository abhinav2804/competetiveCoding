#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--){
		int min = 101, num, f =1;
		vector <int> _v;
		cin>>n;
		while(n--){
			cin>>num;
			if (num < min) {
				min = num;
			}
			_v.push_back(num);
		}
		for(int i=0; i < _v.size(); i++){
			if(((_v[i] - min)%2) > 0){
				f = 0;
				break;
			}
		}
		if(!f) {
			cout<<"NO\n";
		}
		else if(f){
			cout<<"YES\n";
		}
	}
	return 0;
}
