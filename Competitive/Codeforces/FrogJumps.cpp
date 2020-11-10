#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		int max = -1, prev = -1;
		cin>>s;
		for (int i=0; i<s.size(); i++){
			if(s[i] == 'R'){
				int temp = i-prev;
				if(max < temp){
					max = temp;
				}
				prev = i;
			}
		}
		//cout<<max<<" "<<s.size()-prev<<endl;
		int temp = s.size() - prev;
		if(temp > max) {
			//cout<<"here \n";
			max = temp;
		}
		cout<<max<<endl;
	}
	return 0;
}
