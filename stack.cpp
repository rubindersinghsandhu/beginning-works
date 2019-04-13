#include<iostream>
using namespace std;
struct stack {
	int top;
	int cap;
	int *array;
};
struct stack *start = NULL;
struct stack * memory() {
	struct stack *n;
	n = (struct stack *)malloc(sizeof(struct stack));
	return n;
}
int isfull(struct stack *f) {
	if (f->top == f->cap - 1) {
		return 1;
	}
	else
		return 0;
}
int isempty(struct stack *f) {
	if (f->top == -1) {
		return 1;
	}
	else return 0;
}
void pusha(struct stack *f) {
	if (!isfull(f)) {
		f->top++;
		cout << "enter the value ";
		cin >> f->array[f->top];
	}
}
void popa(struct stack *f) {
	if (!isempty(f)) {
		cout << "the value that is being deleted is " << f->array[f->top] << endl;
		f->top--;
	}
}
void createstack(struct stack *f) {
	cout << "enter the capacity of stack";
	cin >> f->cap;
	cout <<"you entered stack capacity" <<f->cap<<endl;
	f->array = (int *)malloc(sizeof(int)*f->cap);
	f->top = -1;
	while (f->top < f->cap-1) {
		pusha(f);
	}
}
void showstack(struct stack* f) {
	while (f->top != -1) {
		popa(f);
	}
}
int main() {
	struct stack *a;
	int b;
	a = memory();
createstack(a);
showstack(a);
cin >> b;
}