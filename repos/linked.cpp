#include<iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node* prev;
};
struct node* head;
struct node* one;
struct node* two;
struct node* three;


void print(struct node* lol) {
	int count = 1;
	while (lol != NULL) {
		cout << "Element " << count << ": " << lol->data<<endl;
		lol = lol->next;
		count++;
	}
}
void printBackward(struct node* lol) {
	int count = 4;
	while (lol != NULL) {

		cout << "Element " << count << ": " << lol->data<<endl;
		lol = lol->prev;
		count--;
	}
}	  
int main() 
{
	node* head = (struct node*)new node;
	node* one = (struct node*)new node;
	node* two = (struct node*)new node;
	node* three = (struct node*)new node;
	
	head->data = 1;
	head->next = one;
	head->prev = NULL;
	one->data = 2;
	one->next = two;
	one->prev = head;
	two->data = 3;
	two->next = three;
	two->prev = one;
	three->data = 4;
	three->next = NULL;
	three->prev = two;
	cout << "traverse from the starting: " << endl;
	print(head);
	cout << "traverse from the ending: " << endl;
	printBackward(three);
	return 0;
}
