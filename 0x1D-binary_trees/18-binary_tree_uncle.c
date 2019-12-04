#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: is a pointer to the node to find the sibling
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int node_v = 0;

	if (!node || node->parent == NULL || (node->parent)->parent == NULL)
		return (NULL);

	node_v = node->parent->n;
	node = (node->parent)->parent;
	if (!node->left || !node->right)
		return (NULL);

	if (node->left->n == node_v)
		return (node->right);
	else
		return (node->left);
}
