#include <bits/stdc++.h>

using namespace std;

long long int gcd1(vector<long long> &v , int max){
	long long int val , num1=-1, num2;
	for(int i=0;i<v.size();){
		if(v[i] == max)
			i++;
		else{ 
			if(num1==-1){
				num1=v[i];
				i++;
			}
			else
				num1= val;
			while(v[i] == max)
				i++;
			if(i!=v.size()){
				num2 = v[i];
				i++;
	//		cout<<num1<<" "<<num2<<" ";
				val = __gcd(num1,num2);
	//		cout<<val<<endl;
			}
			else
				val = num1;
			if(val==1)
				break;
		}
	}
	//cout<<val;
	return val;
}

bool desc(long long int a , long long int b){
	return a>b;
}
/*long long int gcd1(vector<long long> &v , int pos, int pos2){
	long long int val , num1=-1, num2;
	for(int i=0;i<v.size();){
		if(i==pos || i==pos2 ||  v[i] == v[pos] ||  v[i] == v[pos2])
			i++;
		else{ 
			if(num1==-1){
				num1=v[i];
				i++;
			}
			else
				num1= val;
			num2 = v[i];
			i++;
			val = __gcd(num1,num2);
		}
	}
	return val;
}*/

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif 
	int T,N;
	cin>>T;
	while(T--){
		vector<long long int> Nvec;
		long long int i,max=INT_MIN, max2=INT_MIN, min=1000000002, maxpos=-1,max2pos=-1,num;
		cin>>N;
		for(i=0;i<N;i++){
			cin>>num;
			if(num>max ){
				max2 = max;
				//max2pos = maxpos;
				max = num;
				//maxpos = i;
			}
			else if(num>max2 && num<max){
				max2 = num;
				//max2pos = i;
			}
			if(min>num)
				min = num;
			Nvec.push_back(num);
		}
		sort(Nvec.begin(),Nvec.end(),desc);
		//cout<<max<<" "<<max2<<" "<<min<<" :: "; 
		if(min == 1)
			cout<<min+max<<endl;
		else if(max==min)
			cout<<2*max<<endl;
		//else if(max!=min)
		//	cout<<max+gcd1(Nvec,maxpos,max2pos);
		else{
			long long ret = max + gcd1(Nvec,max),ret2 = max2 + gcd1(Nvec,max2);
			//cout<<ret<<" : "<<ret2<<endl;
			//cout<<std::max(ret,ret2)<<endl;
			if(ret>ret2)
				cout<<ret<<endl;
			else
				cout<<ret2<<endl;
		}
	}
	return 0;
}