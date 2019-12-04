#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the
 * number of leaves
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter = 0, counter1 = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	counter = binary_tree_leaves(tree->left);
	counter1 = binary_tree_leaves(tree->right);

	return (counter + counter1);
}
