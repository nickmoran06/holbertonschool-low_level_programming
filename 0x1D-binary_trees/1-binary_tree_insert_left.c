#include "binary_trees.h"

/**
 * binary_tree_node_1 - function that creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node_1(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}


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
	ins_node = binary_tree_node_1(parent, value);
	if (!ins_node)
		return (NULL);

	ins_node->left = parent->left;
	parent->left = ins_node;
	if (ins_node->left != NULL)
		(ins_node->left)->parent = ins_node;

	return (ins_node);
}
