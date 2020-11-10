#include <bits/stdc++.h>

using namespace std;

int main(){
	int T, _m, j;
	string s;
	cin>>T;
	while(T--){
		cin>>s;
		int flag = 1;
		bool arr[s.size()] = {0};
		for(int i=0;i<s.size();i++){
			if(s[i]!='.'){
				_m = s[i] - '0';
				j=i-1;
				while(_m-- && j>=0 && flag){
					if(!arr[j])
						arr[j]=1;
					else
						flag = 0;
					j--;
				}
				//cout<<j<<"\n";
				j=i+1;
				_m = s[i] - '0';
				while(_m-- && j<s.size() && flag){
					if(!arr[j])
						arr[j]=1;
					else
						flag =0;
					j++;
				}
				//cout<<j<<"\n";
				arr[i] = 1;		
			}
			if(!flag)
				break;
		}
		/*for(int i=0;i<s.size();i++){
			cout<<arr[i]<<" ";
		}*/
		if(!flag)
			cout<<"unsafe\n";
		else
			cout<<"safe\n";
	}
	return 0;
}
