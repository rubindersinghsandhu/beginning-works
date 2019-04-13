#include<iostream>
using namespace std;
struct bstree {
	int data;
	struct bstree *left;
	struct bstree *right;
};
struct bstree * createnode() {
	struct bstree *b;
	b = (struct bstree *)malloc(sizeof(struct bstree));
	b->data = 0;
	b->left = NULL;
	b->right = NULL;
	return b;
}
struct bstree* createtree(struct bstree *root,int item) {
	if (root == NULL) {
		root = createnode();
		root->data = item;
		return root;
	}
			if (item < root->data) {
				root->left = createtree(root->left,item);
			}
			else if (item != root->data) {
				root->right = createtree(root->right,item);
			}
	return root;
}
struct bstree *shownode(struct bstree *root,int item) {
	if (item < root->data) {
		root = shownode(root->left,item);
	}
	else if (item > root->data) {
		root = shownode(root->right, item);
	}
	else if (root->data == item) {
		cout << "element found " << root->data;
	}
	return root;
}
void inorder(struct bstree *root) {
	if (root) {
		inorder(root->left);
		cout<<root->data<<endl;
		inorder(root->right);
}
}
int main() {
	int b;
	struct bstree *root=NULL,*temp = NULL;;
	int n = 1,count=0;
	while (n) {
		cout << " if  you want to enter a value press 1 else 0 " << endl;
		cin >> n;
		if (n) {
			cout << endl << " enter the item you want to save " << endl;
			int item;
			cin >> item;
			root = createtree(root, item);
			count++;
		}
	}
	//root = shownode(root, 55);
	inorder(root);
	cin >> b;
}