#include<bits/stdc++.h>
using namespace std;

	int n = 6;
	int arr[] = { 2,3,4,5,33,34 };
struct node
{
	int data;
	struct node *next;

}*t;

void create_linkedlist(int n , arr[])
{ 
	struct node *t,*previous;

	for (int i = 0; i < n; i++)
	{
		t = new node;
		t-> data = arr[i];
		t-> next = NULL;
		previous-> next= t;
		previous= t;
	}
}

void display_linkedlist(struct node *p)
{
	while(p != NULL){
		cout << p->data << endl;
	}
}
int main() 
{

	
	create_linkedlist(n, arr);
	display_linkedlist(t);

	return 0;
}