#include<iostream>
using  namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};


node* buildtree() {
	int x;
	cin >> x;
	if (x == -1) {
		return  NULL;
	} else {
		node* root = new node(x);
		root->left = buildtree();
		root->right = buildtree();
		return root;
	}
}

void Preorder(node* root) {

	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(node* root) {

	if (root == NULL) {
		return;
	}
	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}


void Postorder(node* root) {

	if (root == NULL) {
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}

int countnodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	int left_subtree = countnodes(root->left);
	int right_subtree = countnodes(root->right);

	int ans = left_subtree + right_subtree + 1;
	return ans;
}


int Sumnodes(node* root) {
	if (root == NULL) {
		return 0;
	}

	int left_subtree = Sumnodes(root->left);
	int right_subtree = Sumnodes(root->right);

	int ans = left_subtree + right_subtree + root->data;
	return ans;
}

int height(node* root) {
	if (root == NULL) {
		return 0;
	}

	int left_subtree_height = height(root->left);
	int right_subtree_height = height(root->right);

	int ans = max(left_subtree_height, right_subtree_height) + 1;
	return ans;
}


void Mirror(node* root) {

	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);

	Mirror(root->left);
	Mirror(root->right);
}


int main() {
	node* root = buildtree();
	Preorder(root);
	cout << endl;
	Inorder(root);
	cout << endl;
	Postorder(root);
	cout << endl;
	cout << countnodes(root) << endl;
	cout << Sumnodes(root) << endl;
	cout << height(root) << endl;

	Mirror(root);
	Preorder(root);
}





