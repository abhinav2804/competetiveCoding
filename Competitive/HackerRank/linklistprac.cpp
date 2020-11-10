#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node * next;
	Node(int d){
		data = d;
		next = NULL;
	}
}*start,*end1,*temp;

void insert(){
	Node*t = start;
	if(t==NULL)
	{
		start = temp;
		end1 = temp;
	}
	else{
		end1->next = temp;
		end1 = temp;
	}
}



void printAll(){
	Node *t;
	for(t=start;t!=NULL;t = t->next)
		cout<<t->data<<" ";
	cout<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	start = NULL;
	end1 = NULL;
	int i,n,d;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>d;
		temp = new Node(d);
		insert();
	}
	printAll();
}