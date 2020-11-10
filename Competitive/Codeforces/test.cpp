#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, vector<int>> _m;
	if(_m[0].size() == 0){
		cout<<"0 it is\n";
	}
	_m[1].push_back(1);
	if(_m[1].size() != 0){
		cout<<"1 it is\n";
	}
	return 0;
}
