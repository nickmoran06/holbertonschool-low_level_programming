#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if is full, If tree is NULL, the function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 0, flag1 = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
	{
		flag = binary_tree_is_full(tree->left);
		flag1 = binary_tree_is_full(tree->right);
	}
	if (flag == 0 || flag1 == 0)
		return (0);
	return (1);
}
