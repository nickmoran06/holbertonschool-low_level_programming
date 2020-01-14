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

/**
 * binary_trees_ancestor - function that finds the lowest common of
 * two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor. If no common ancestor
 * was found return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{

	int depth_first = 0, depth_second = 0;

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	if (!first || !second)
		return (NULL);

	while (depth_first != depth_second)
	{
		if (depth_first > depth_second)
		{
			first = first->parent;
			depth_first--;
		}
		if (depth_second > depth_first)
		{
			second = second->parent;
			depth_second--;
		}
	}
	if (depth_first == depth_second)
	{
		while (first->n != second->n)
		{
			first = first->parent;
			second = second->parent;
		}
		return (first->left->parent);
	}
	else
		return (NULL);
}
