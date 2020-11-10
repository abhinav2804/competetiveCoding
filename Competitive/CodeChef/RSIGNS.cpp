#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using boost::multiprecision::cpp_int;
using namespace std;
#define ll long long 

// Sieve Of Eratosthenes
//https://www.geeksforgeeks.org/find-abm-where-b-is-very-large/

const int MAX = 1000000008; 
  
// Stores prime numbers upto MAX - 1 values 
vector<ll> p; 
  
// Finds prime numbers upto MAX-1 and 
// stores them in vector p 
void sieve() 
{ 
    ll isPrime[MAX+1]; 
  
    for (ll i = 2; i<= MAX; i++) 
    { 
        // if prime[i] is not marked before 
        if (isPrime[i] == 0) 
        { 
            // fill vector for every newly 
            // encountered prime 
            p.push_back(i); 
             // run this loop till square root of MAX, 
            // mark the index i * j as not prime 
            for (ll j = 2; i * j<= MAX; j++) 
                isPrime[i * j]= 1; 
        } 
    } 
} 
  
// function to find totient of n 
ll phi(ll n) 
{ 
    ll res = n; 
  
    // this loop runs sqrt(n / ln(n)) times 
    for (ll i=0; p[i]*p[i] <= n; i++) 
    { 
        if (n % p[i]== 0) 
        { 
            // subtract multiples of p[i] from r 
            res -= (res / p[i]); 
  
            // Remove all occurrences of p[i] in n 
            while (n % p[i]== 0) 
               n /= p[i]; 
        } 
    } 
  
    // when n has prime factor greater 
    // than sqrt(n) 
    if (n > 1) 
       res -= (res / n); 
  
    return res; 
}
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1; // Initialize result 
  
    // Update x if it is more than or 
    // equal to p 
    x = x % p;  
  
    while (y > 0) { 
        // If y is odd, multiply x with the result 
        if (y & 1) 
            res = (res * x) % p; 
  
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
} 
/*
struct Digits{

};*/
long long MOD=1e09+7;
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	//sieve();
	vector<cpp_int> refer;
	//vector<int> digP(10,0);
	//long long T,K,i,count=2;
	//cout<<count;
	long long T,K,i,Kpre=-1,count=2;
	cin>>T;
	cpp_int val = 1,val1=0, Kmax=-1,ans = 0;
	while(T--){
	    cin>>K;
      //  count = phi(MOD);
        ans = 5*(power(2,K,MOD));
    	cout<<(ans)%MOD<<endl;
	}
	/*for(i=1;i<=Kmax;i++){
	    val1 = (val<<1)%MOD;
	    val = val1;
	    vector<cpp_int>:: iterator it = find(refer.begin(),refer.end(),i);
	    if(it!=refer.end()){
	        ans = (5*(val1)) ;
	        ans = ans %MOD;
	        *it = ans;
	    }
	}
	vector<cpp_int> refer1 = refer;
	/*if(Kpre==-1)
	    Kpre = K;
	//long long maxnum = (pow(10,9)+7);
	//for(int i=0;i<K;i++)
	if(!val1)
	{
	    val1 = (val<<K)% MOD;
        //cout<<val1<<" "<<val;
	}
	else{
	    cpp_int val2 = val1;
	    //cout<<val2<<" : "<<endl;
	    while(Kpre < K){
	        val1 = (val2<<1)%MOD;
	        Kpre++;
	        val2 = val1;
	    }
	    while(Kpre > K){
	        val1 = (val2>>1)%MOD;
	        Kpre--;
	        val2 = val1;
	    }
	}*//*
    vector<cpp_int>:: iterator it = find(refer.begin(),refer.end(),i);
	for(it=refer.begin();it<refer.end();it++){
	    cout<<*it<<endl;
	}*/
	return 0;
}