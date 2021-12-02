#include"binary_trees.h"

/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *@tree:is a pointer to the root node of the tree to check
 *Return: 1 if a binary tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left == 0 || right == 0)
			return (0);
		else
			return (1);
	}
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);
}
