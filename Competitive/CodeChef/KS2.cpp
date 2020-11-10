#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
using namespace std;

cpp_int sumV(cpp_int N){
	cpp_int ans = 0;
	/*for(int i=0 ; i<dig.size(); i++)
		ans = ans*10 + dig[i];*/
	while(N){
		ans += N%10;
		N = N/10;
	}
	if(ans%10)
		return (10 - ans%10);
	else
		return 0;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	//vector<long long int> ans, Nvec ;//start {19,109}; 
	cpp_int N, T, addV;
	cin>>T;
	while(T--){
		cin>>N;
		//N = N*10;
		addV = sumV(N);
		N = (N*10)+addV;
		cout<<N<<endl;
	}
	return 0;
}