#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* left;
	node* right;
}

node* getNewnode(int data){
	node newnode = new node();
	newnode->data = data;
	newnode->left = Null;
	newnode->right = Null;
	return newnode;
}

node* insert(node* root, int data){
	if(root == Null){
		root = getNewnode(data);
	}
	else if(data<=root->left){
		root->left = insert(root->left, data);
	}
	else{
		root->right = insert(root->right, data);
	}
	return root;

}

bool search_1(node* root, int data){
	if(root==Null){
		return false;
	}
	else if(root->data == data){
		return true;
	}
	else if(data<=root->left){
		return search(root->left, data);
	}
	else{
		return search(root->right, data);
	}
}

void serach_2(node* root, int data){
	if(root==Null){
		return -1;
	}
	while(root!=Null){
		if(root->data == data){
			return root;
		}
		else if(data<=root-left){
			root = root->left;
		}
		else{
			root = root->right;
		}
		return Null;
	}
}

node *min_ele(node* root){
	if(root==Null){
		return -1;
	}
	while(root-left!=Null){
		root = root-left;
	}
	return root->data;
}

node *max_ele(node* root){
	if(root==Null){
		return -1;
	}
	while(root-right!=Null){
		root = root-right;
	}
	return root->data;
}

node* height(node* root){
	if(root==Null){
		return -1;
	}
	return max(height(root->left), height(root->left));
}

int main(){
	node* root = Null;

	root = insert(root, 10);
	root = insert(root, 15);
	root = insert(root, 20);

	int num;
	cout<<"Enter number to be seached"<<endl;
	cin>>num;

	if(search(root, num)){
		cout<<"Element is found";
	}
	else{
		cout<<"Not found";
	}

}