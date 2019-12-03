#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node.
 *
 * @parent:  is a pointer to the node to insert the right-child in
 * @value:  is the value to store in the new node
 *
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ins_node;

	if (!parent)
		return (NULL);
	ins_node = binary_tree_node(parent, value);
	if (!ins_node)
		return (NULL);

	ins_node->right = parent->right;
	parent->right = ins_node;
	if (ins_node->right != NULL)
		(ins_node->right)->parent = ins_node;

	return (ins_node);
}
