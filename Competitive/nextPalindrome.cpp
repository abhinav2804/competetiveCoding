#include <bits/stdc++.h>

using namespace std;

int main(){
	int number, d, count=0;
	list<int> _l;
	cin>>number;
	while(number){
		d = number%10;
		number /= 10;
		_l.push_front(d);
		count++;
	}
	auto it1 = _l.begin();
	auto it2 = _l.end();
	--it2;
	if(count%2==0){
		count = count/2-1;
		it1 = next(_l.begin(),count);
		it2 = next(_l.begin(),count+1);
		while(it2!=_l.end()){
			if(*it1 == 9){
				*it1 = 0;
				*it2 = 0;
			}
			else{
				*it1 = *it1+1;
				*it2 = *it1;
				break;
			}
			it1--;
			it2++;
		}
	}
	else{
		count = count/2;
		//cout<<count<<endl;
		it1 = next(_l.begin(),count);
		//cout<<*it1<<endl;
		if(*it1!=9)
			++(*it1);
		else{
			it2 = it1;
			(*it1) = 0;
			it1--;
			it2++;
			while(it2!=_l.end()){
				if(*it1!=9){
					(*it1)++;
					(*it2)++;
					break;
				}
				else{
					*it1 = 0;
					*it2 = 0;
				}
				it1--;
				it2++;
			}
		}
	}
	if(*(_l.begin())==0){
				_l.push_back(1);
				*(_l.begin()) = 1;
			}

	for(it1 = _l.begin(); it1!=_l.end(); it1++)
		cout<<*it1;
	cout<<endl;
	return 0;
}
