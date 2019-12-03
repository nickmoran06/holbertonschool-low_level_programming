#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a binary tree
 *
 * @tree: is a pointer to the node to measure the depth.
 *
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	while (tree)
	{
		if (tree->parent)
			counter++;
		tree = tree->parent;
	}
	return (counter);
}
