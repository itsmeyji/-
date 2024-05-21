#include <stdio.h>
#include <stdlib.h>
#include "traversalBT.h"

treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data = data;
	root->left = leftNode;
	return root;
}

void preorder(treeNode* root) {
	of(root); {
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(treeNode* root) {
	if (root) {
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
	}
}

void postorder(treeNode* root) {
	if (root) {
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}