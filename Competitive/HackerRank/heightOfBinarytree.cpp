#include <bits/stdc++.h>

using namespace std;

class Node{
	int data;
	Node* left, *right;

	public:
		Node (int d){
			//Node*t;
			data = d;
			left = NULL;
			right = NULL;
			//return t;
		}
		void printAll(Node*r){
			//cout<<r->data<<" "<<r->left<<" "<<r->right<<endl;
			queue <Node *> ql;
			ql.push(r);
			while(!ql.empty()){
				Node *t = ql.front();
				ql.pop();
				cout<<t->data<<" ";
				if(t->left!=NULL)
					ql.push(t->left);
				if(t->right!=NULL)
					ql.push(t->right);
			}
		}
		/*Node * insert1(Node *temp){
			if(root == NULL){
				root = temp; 	
			}
			else{
				if(root->left!=NULL && root->right!=NULL);
					insert1(root->left)
			}	
			return root;
		}*/
		Node * insert(Node*t,Node*r){
			if(r==NULL)
				r = t;
			else{
				if(t->data < r->data){
					t = insert(t,r->left);
					r->left = t;
				}
				else{
					t = insert(t,r->right);
					r->right = t;
				}
			}
			//return r;
			/*r = v[0];
			bool flag = 0;
			int i=1;
			for(i=0;i<v.size();i++){
				if(2*i+1<v.size()){
					v[i]->left = v[2*i+1];
					flag = 1;
				}
				if(2*i+2<v.size()){
					v[i]->right = v[2*i+2];
					flag = 1;
				}
				if(!flag)
					break;
			}*/
			return r;
		}

		int height(Node*r){
			int max = INT_MIN, temp=-1;
			Node *t; 
			if(r->left!=NULL){
				temp = height(r->left);
			}
			if(r->right!=NULL){
				temp = height(r->right);
			}
			//if(r->left==NULL && r->right==NULL)
				temp++;
			if(max<temp)
				max = temp;
			return max;
		}

}*root,o1(1);

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	root = NULL;
	vector<Node*> v;
	Node* temp;
	int d,N;
	cin>>N;
	for(int i= 0;i<N;i++){
		cin>>d;
		temp = new Node(d);
		root = o1.insert(temp,root);
		//v.push_back(temp);
		//root = root->insert1(d,root);
	}
	//root=temp;
	o1.printAll(root);
	cout<<" Height is "<<o1.height(root);
	return 0;
}

//50 47 2 40 20 38 30 14 28 10 16 19 44 39 27 7 9 31 12 43 21 5 41 34 49 13 33 3 4 25 22 29 15 32 35 6 24 23 26 1 11 42 36 37 17 18 8 45 48 50 46
//3 5 7 10 12 47 49 50 46 37