#include <bits/stdc++.h>

using namespace std;

int main(){
	fstream fin,fout;
	char ch;
       	fin.open("input.txt");	
	for(int i=0;i<50;i++)
		fin<<"50000 ";
	fin<<"\n";
	fin.close();
	fout.open("input.txt");
	while(fout.get(ch)!=EOF)
		cout<<ch<<" ";
}
