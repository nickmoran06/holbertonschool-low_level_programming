#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0, counter1 = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree->left)
		counter = binary_tree_height(tree->left);
	if (tree->right)
		counter1 = binary_tree_height(tree->right);
	if (counter >= counter1)
		return (1 + counter);
	return (1 + counter1);
}
