#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node* next;
};
struct node* head=0;



void create(){
	struct node* newnode, temp;
	int x;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		cout<<"Out of space"<<endl;
		exit(0);
	}

	cout<<"enter data"<<endl;
	cin>>x;
	newnode->data = x;
	newnode->next = 0;
	if(head==NULL){
		head = temp = newnode;
	}
	else{
		temp->next = newnode;
		temp = newnode;
	}
}


void display(){
	struct node* temp;
	if(head==NULL){
		cout<<"List is empty"<<endl;
	}
	else{
		temp = head;
		while(temp->next!=NULL){
			cout<<temp->data;
			temp = temp->next;
		}
	}
}


void insert_beg(){
	if(head==NULL){
		struct node* newnode;
		int x;
		newnode = (struct node*)malloc(sizeof(struct node));
		if(newnode==NULL){
			cout<<"Out of space"<<endl;
			exit(0);
		}

		cout<<"enter data"<<endl;
		cin>>x;
		newnode->data = x;
		newnode->next = 0;
		if(head==NULL){
			head =  newnode;
		}
		else{
			newnode->next = head;
			head = newnode;
		}
	}
}


void insert_end(){
	struct node* newnode, temp;
	int x;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		cout<<"Out of space"<<endl;
		exit(0);
	}

	cout<<"enter data"<<endl;
	cin>>x;
	newnode->data = x;
	newnode->next = 0;
	if(head==NULL){
		head = newnode;
	}
	else{
		temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;	
	}
}


void insert_pos(){
	struct node* temp;

	int pos,x;
	cout<<"Enter pos"<<endl;
	cin>>pos;
	int i=1;

	if(pos<0){
		cout<<"Invalid position"<<endl;
	}
	else{
		temp = head;
		cout<<"enter data"<<endl;
		cin>>x;
		newnode->data = x;
		while(i<pos-1){
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;

	}

}


void delete_beg(){
	struct node* temp;
	if(head==NULL){
		cout<<"List is already empty"<<endl;
	}
	else{
		temp = head;
		head = temp->next;
		free(temp);
	}
}


void delete_end(){
	struct node* temp;
	temp = head;
	while(temp->next!=NULL){
		prevNode = temp;
		temp = temp->next;
	}
	if(temp == head){
		head = 0;
		free(temp);
	}
	else{
		prevNode->next = 0;
		free(temp);
	}
}


void delete_pos(){
	struct node* temp, *nextnode;
	if(head==NULL){
		cout<<"list is empty"<<endl;
		exit(0);
	}
	else{
		cout<<"enter position"<<endl;
		cin>>pos;
		int i=1;
		temp = head;

		while(i<pos-1){
			temp = temp->next;
			i++;
		}

		nextnode = temp->next;
		temp->next = newnode->next;
		free(nextnode);
	}


}

int main(){
	int choice;
	cout<<"Enter"<<endl;
	cout<<"1. create()"<<endl;
	cout<<"2. display()"<<endl;
	cout<<"3. insert_beg()"<<endl;
	cout<<"4. insert_end()"<<endl;
	cout<<"5. insert_pos()"<<endl;
	cout<<"6. delete_beg()"<<endl;
	cout<<"7. delete_end()"<<endl;
	cout<<"8. delete_pos()"<<endl;
	cout<<"9. exit()"<<endl;

	cin>>choice;

	switch(choice){
		case 1:
			create();
		case 2:
			display();
		case 3:
			insert_beg();
		case 4:
			insert_end();
		case 5:
			insert_pos();
		case 6:
			delete_beg();
		case 7:
			delete_end();
		case 8:
			delete_pos();
		case 9:
			exit(0);
	}

return 0;
}