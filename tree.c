#include <stdio.h>
#include <stdlib.h>

struct node {struct node *left; struct node *right; char *label;};

int main(void)
{
	struct node *nodeLeft = malloc(sizeof(struct node));
	nodeLeft->right = NULL;
	nodeLeft->left = NULL;
	nodeLeft->label = "node left";
	struct node *nodeRight = malloc(sizeof(struct node));
	nodeRight->right = NULL;
	nodeRight->left = NULL;;
	nodeRight->label = "node right";
	struct node *root = malloc(sizeof(struct node));
	root->left = nodeLeft;
	root->right = nodeRight;
	root->label = "root";

	printf("%s\n", root->label);
	printf("%s\n", root->right->label);
	printf("%s\n", root->left->label);

	free(nodeLeft);
	free(nodeRight);
	free(root);
	return 0;
}
