#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: is a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int node_v;

	if (!node || node->parent == NULL)
		return (NULL);

	node_v = node->n;
	node = node->parent;
	if (!node->left || !node->right)
		return (NULL);

	if (node->left->n == node_v)
		return (node->right);
	else
		return (node->left);
}
