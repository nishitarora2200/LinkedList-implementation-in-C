#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *link;
	
};


void addNode(struct node **,int num);
void display(struct node*);
void addAtBeg(struct node**,int num);
void deleteNode(struct node**,int num);
void addAfter(struct node**,int ,int);
int main(){
	struct node*p;
	p=NULL;
	addNode(&p,3);
	addNode(&p,4);
	addNode(&p,5);
	display(p);
	addAtBeg(&p,55);
	display(p);
	deleteNode(&p,3);
	display(p);
	deleteNode(&p,55);
	display(p);
	deleteNode(&p,5);
	display(p);
	addAfter(&p,77,4);
	display(p);
	addAfter(&p,)
	
	
}
void addNode(struct node**q,int num){
	struct node*temp,*r;

	if(*q!=NULL){
		temp = *q;
		while(temp->link!=NULL){
			temp = temp->link;
				
		}
		
		r = (struct node*)malloc(sizeof(struct node*));
		r->data = num;
		r->link = NULL;
		temp->link = r;  
		
}
else if(*q==NULL){
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
		temp->link = NULL;
		*q = temp;
}

}
void addAtBeg(struct node**q,int num){
	struct node *temp,*r;
	if(*q!=NULL){
		temp = (struct node *)malloc(sizeof(struct node));
		r = *q;
		*q = temp;
		temp->data  = num;
		temp->link = r;
		
	}
}

void display(struct node *q){
	while(q!=NULL){
		
		cout<<q->data<<",";
		q = q->link;
	}
	cout<<endl;
}
void deleteNode(struct node**q,int num){
	struct node *temp,*prev;
	temp = *q;
	if(temp->data == num){
		*q = temp->link;
	}
	
	while(temp->data!=num && temp->link!=NULL){
		 prev = temp;
		temp = temp->link;
		
	}
	if(temp->data==num){
		prev->link = temp->link;
		
		free(temp);
	}
	
	
	
	
}

void addAfter(struct node**q,int num,int element){
	struct node*temp,*next,*r;
	
	temp = *q;
	r = (struct node*)malloc(sizeof(struct node));
	r->data = num;
	r->link = NULL;
	while(temp->data!=element){
		temp = temp->link;
		
	}
	next = temp->link;
	temp->link = r;
	r->link = next;
	
	
	
	
}

 
