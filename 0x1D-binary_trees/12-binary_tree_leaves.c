#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the number of leaves
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter = 0, counter1 = 0;

	if (tree)
	{
		binary_tree_leaves(tree->right);
		binary_tree_leaves(tree->left);
		if (tree->left == NULL)
			counter1++;
		if (tree->right == NULL)
			counter++;
	}
	return (counter + counter1);
}
