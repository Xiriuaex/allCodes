#include<iostream>
                   //#include<stack>//instead of creating a stack myself ther is a stack library in cpp already for stack;

using namespace std;

struct node{
	int data;
	node* next;
};

class stack {

public:
		node* top = NULL;
		void push(int number) {
			node* value1 = (node*)new node;	 
			top = value1;
			value1->data = number;
			value1->next = NULL;
			
			
	} 
		void print(){
			while (top != NULL) {
				cout << "Element: " << top->data << endl;
				top = top->next;
			}
		}
		void pop() {
			if (top != NULL)
			{
				node* value2 = (node*)new node;
				value2->next = top;
				free(top);
				value2->next = NULL;
				cout << "Element: " << value2->data << endl;
			}
			else {
				cout << "lol";
				//top = top->next;
			}
		}

};
		int main() {
			stack use;
			use.push(3); use.print();
			use.push(4); use.print(); 
			use.push(5); use.print(); 
			use.push(6); use.print(); 
			use.push(7); use.print();
			use.pop(); //use.print();
			use.push(8); use.print();
			return 0;
		}