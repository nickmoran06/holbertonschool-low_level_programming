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
	size_t counter = 0;

	if (tree)
	{

		if (tree->left)
		{
			counter++;
			binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			counter++;
			binary_tree_height(tree->right);
		}
	}
	return (counter);
}
