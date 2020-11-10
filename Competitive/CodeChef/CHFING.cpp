#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;
namespace mp = boost::multiprecision;

#define MOD 1000000007

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int T;
	cin>>T;
	while(T--){
	    cpp_int ans=0,diff,ni,ki;
	    long long int K,N;
		cin>>N>>K;
		N = K + N -1;
		if(N-K==1){
		    long long term = (N - 2)MOD;
		    ans = ((mp::(mp::((mp::((N %MOD)))*(mp::((N-1)%MOD))))%MOD))%MOD)/2;
		}
		else{
		    ans = (ans+K-1)MOD;
	    	ni = 1;
	    	ki = 2;
	    	diff=2;
	    	while(1){
	    	    diff = (K*ki) - (N*ni);
	    	    if(diff>1){
	    	        ki++;
	    	        ni++;
    		        ans = (ans + diff-1)MOD;
    		    }
	    	    else
	    	     break;
	    	}
		}
		cout<<ans<<endl;
	}
	return 0;
}