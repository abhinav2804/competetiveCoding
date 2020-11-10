#include <bits/stdc++.h>

using namespace std;

int main(){
	int T,n,k,num,diff;
	long long int sum =0 ;
	cin>>T;
	while(T--){
		vector<int> _q;
		cin>>n>>k;
		sum = 0;
		for(int i=0;i<n;i++){
			cin>>num;
			if(num>k)
				_q.push_back(num);
			sum += num;
		}
		//cout<<"here \n";
		if(_q.size())
			sort(_q.begin(),_q.end());
		//cout<<"here 2 \n";
		//cout<<_q.size();
		for(int i=0;_q.size()!=0 && i<_q.size()-1;i++){
			diff = _q[i]-k;
			_q[i+1] = _q[i+1] - diff;
			sum -= (2*diff);
		}
		cout<<sum<<endl;
	}
	return 0;
}
