#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		map <int, vector<int>> _m;
	       	vector<int> _v;
		int n, num, i = 0, f =0;
		cin>>n;
		while (i<n){
			cin>>num;
			if(_m[num].size() == 0){
				_v.push_back(num);
			}
			_m[num].push_back(i+1);
			i++;
		}
		if (_v.size()>1){
			for (i=0; i<_v.size(); i++){
				if(_m[_v[i]].size() >=3 ){
					f = 1;
					break;
				}
				else if(_m[_v[i]].size() == 2 && (_m[_v[i]][1] > _m[_v[i]][0]+1)){
					f = 1;
					break;
				}
			}
		}
		else if(_v.size() <= 1 && _m[_v[0]].size() > 2){
			f = 1;
		}
		if (f){
			cout<<"YES\n";
		}
		else if(!f){
			cout<<"NO\n";
		}
	}
	return 0;
}
