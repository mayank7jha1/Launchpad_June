#include<iostream>
#include<algorithm>
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

int diameter(node* root) {

	if (root == NULL) {
		return 0;
	}

	int Option1 = diameter(root->left);
	int Option2 = diameter(root->right);

	//Diameter Passes through root node:
	int Option3 = height(root->left) + height(root->right);

	// int ans = max(Option1, max(Option2, Option3));
	int ans = max({Option1, Option2, Option3});

	return ans;
}

class Pair2 {
public:
	int height;
	int diameter;
};
Pair2 p;

Pair2 fastdiameter(node* root) {

	if (root == NULL) {
		p.height = 0;
		p.diameter = 0;
		return p;
	}

	Pair2 left_subtree = fastdiameter(root->left);
	Pair2 right_subtree = fastdiameter(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	int Option1 = left_subtree.diameter;
	int Option2 = right_subtree.diameter;
	int Option3 = (left_subtree.height + right_subtree.height);

	p.diameter = max({Option1, Option2, Option3});

	return p;
}


class Pair3 {
public:
	int height;
	int isbalanced;
};

Pair3 p1;

Pair3 IsheightBalanced(node* root) {
	if (root == NULL) {
		p1.isbalanced = 1;
		p1.height = 0;
		return p1;
	}


	Pair3 left_subtree = IsheightBalanced(root->left);
	Pair3 right_subtree = IsheightBalanced(root->right);

	p1.height = max(left_subtree.height, right_subtree.height) + 1;

	if (left_subtree.isbalanced == 1 and right_subtree.isbalanced == 1 and
	        abs(left_subtree.height - right_subtree.height) <= 1) {
		p1.isbalanced = true;
	} else {
		p1.isbalanced = false;
	}

	return p1;
}

node* buildTreefromArray(int *a, int s, int e) {

	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;

	node* root = new node(a[mid]);
	root->left = buildTreefromArray(a, s, mid - 1);
	root->right = buildTreefromArray(a, mid + 1, e);

	return root;
}

void PrintKthLevel(node* root, int k) {
	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
		return;
	}

	PrintKthLevel(root->left, k - 1);
	PrintKthLevel(root->right, k - 1);
}

void PrintALLevel(node* root) {
	int H = height(root);

	for (int i = 1; i <= H; i++) {
		PrintKthLevel(root, i);
		cout << endl;
	}
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
	cout << endl;
	cout << diameter(root) << endl;

	Pair2 op = fastdiameter(root);
	cout << op.height << " " << op.diameter << endl;

	Pair3 op2 = IsheightBalanced(root);
	cout << op2.height << " " << op2.isbalanced << endl;

	int a[] = {10, 11, 12, 13, 14, 15, 16, 17};

	node* root2 = buildTreefromArray(a, 0, 7);
	Preorder(root2);

	cout << endl;

	Pair3 op3 = IsheightBalanced(root2);
	cout << op3.height << " " << op3.isbalanced << endl;

	PrintKthLevel(root, 3);
	cout << endl << endl;;
	PrintALLevel(root);

}





