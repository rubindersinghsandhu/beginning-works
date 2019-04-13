#include<iostream>
using namespace std;
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
struct node * memory() {
	struct node *n;
	n = (struct node *)malloc(sizeof(struct node));
		return n;
}
void data(struct node * n) {
	cout << "\n enter data for new node ";
	cin >> n->data;

}
void link(struct node*a, struct node*b, struct node *c) {
	b->next = c;
	b->prev = a;
}
void link(int, struct node*b, struct node *c) {
	b->next = c;
	
}
void link(struct node*a, struct node*b, int) {
	
	b->prev = a;
}
void showlist(struct node* temp) {
	struct node *head = temp;
	while (temp->next!= head) {
		cout << "\n data at this node is" << temp->data;
		temp = temp->next;
	}
	cout << "\n data at this node is" << temp->data;
}
void createnode(struct node *temps, int item,struct node* head) {
	if (temps->data == item) {
		struct node *newnode;
		newnode = memory();
		link(temps, newnode, temps->next);
		link(newnode, temps->next, 3);
		link(3, temps, newnode);
		data(newnode);


	}
	else {
		cout << "item not found";
	}
	showlist(head);
}
void deletenode(struct node* del, struct node *head) {
	struct node * delprev, *delnext;
	delprev = del->prev;
	delnext = del->next;
	if (del == head) {
		head = del->next;
	}
	delprev->next = delnext;
	delnext->prev = delprev;
	showlist(head);

}
void search(struct node *head, int item) {
	struct node *temps = head;
	int b;
	while (temps->next != head && temps->data != item) {
		temps = temps->next;
	}
	cout << "if you want to create node type 1 for deletion type 2";
	cin >> b;
	if (b == 1) {
		createnode(temps, item,head);
	}
	else if (b == 2) {
		deletenode(temps,head);
	}
	else {
		cout << "you have a bad choice";
	}
}


int main() {
	struct node *n1, *n2, *n3,*head,*temp;
	int b;
	n1 = memory();
	n2 = memory();
	n3 = memory();
	data(n1);
	data(n2);
	data(n3);
	link(n3, n1, n2);
	link(n1, n2, n3);
	link(n2, n3, n1);
	head = n1;
	showlist(head);
	cout << "\n enter data to be operated upon ";
	cin >> b;
	search(head, b);
	
	cin >> b;
}