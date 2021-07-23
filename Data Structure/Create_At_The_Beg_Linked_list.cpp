#include<iostream>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

struct node{
	int data;
	struct node *link;
};

void beg(struct node *head , int begg )
{

	struct node*temp = head;
	temp = new node;

	temp->data = begg;
	temp ->link = NULL;
	temp->link = head->link;
	temp = head;
}

int main ()
{
	debugMode();
	int n1;
	cin >> n1 ;

	struct node *head,*ptr;
	head = new node;

	head-> data = n1;
	head->link = NULL;
	beg(head , 56);
	beg(head , 6);
	beg(head , 76);
	beg(head , 996);
	
	ptr = head;

	while(ptr->link != NULL)
	{
		cout<< ptr->data << endl;
		ptr = ptr->link;
	}

	return 0;
}