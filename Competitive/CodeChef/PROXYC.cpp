#include <bits/stdc++.h>

using namespace std;

void myAvg(float &avg, float pCount, int D, vector<int> &awhere, int  &aCount, vector<int> &pwhere){
	int i=0;
	//cout<<pCount<<" "<<aCount<<endl;
	//cout<<pCount<<endl;
	while(i<awhere.size() && avg<0.75){
		if(awhere[i]>=2 && awhere[i]<=D-3){
			if((find(pwhere.begin(),pwhere.end(),awhere[i]-1)!=pwhere.end() || find(pwhere.begin(),pwhere.end(),awhere[i]-2)!=pwhere.end()) && (find(pwhere.begin(),pwhere.end(),awhere[i]+1)!=pwhere.end() || find(pwhere.begin(),pwhere.end(),awhere[i]+2)!=pwhere.end())){
				//cout<<i<<" ";
				aCount++;
				pCount++;
				//pwhere.push_back(awhere[i]);
			}
		}
		avg = pCount/D;
		//cout<<" :"<<pCount<<" ";
		//cout<<" : "<<avg;
		i++;
	}	
	//cout<<endl;
} 

int myCount(string &s , int D, char ch, vector<int> &awhere, vector<int> &pwhere){
	int c = 0;
	for(int i=0;i<D;i++){
		if(s[i] == ch){
			c++;
			pwhere.push_back(i);
		}
		else{
			awhere.push_back(i);
		}
	}
	return c;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int T,D;
	cin>>T;
	while(T--){
		vector<int> awhere,pwhere;
		string s;
		cin>>D>>s;
		int aCount = 0;
		float pCount = myCount(s,D,'P',awhere,pwhere), avg;
		avg = pCount/D;
//		cout<<aCount<<" ";
		if(avg>=0.75)
			cout<<aCount<<endl;
		else{
			myAvg(avg, pCount, D, awhere, aCount, pwhere);
			if(avg>=0.75)
				cout<<aCount<<endl;
			else
				cout<<"-1"<<endl;
		}
		//cout<<pCount<<" "<<aCount<<" ";
		//cout<<pCount;
	}
	return 0;
}