#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int counter = 0, counter1 = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
		counter = binary_tree_nodes(tree->left);
	if (tree->right)
		counter1 = binary_tree_nodes(tree->right);
	else
		return (0);

	return (1 + counter1 + counter);
}
