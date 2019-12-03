#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node.
 *
 * @parent:  is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ins_node;

	if (!parent)
		return (NULL);
	ins_node = binary_tree_node(parent, value);
	if (!ins_node)
		return (NULL);

	ins_node->left = parent->left;
	parent->left = ins_node;
	if (ins_node->left != NULL)
		(ins_node->left)->parent = ins_node;

	return (ins_node);
}
