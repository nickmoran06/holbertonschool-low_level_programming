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
	size_t counter = 0, counter1 = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree->left)
		counter = binary_tree_height(tree->left);
	if (tree->right)
		counter1 = binary_tree_height(tree->right);
	if (counter >= counter1)
		return (1 + counter);
	return (1 + counter1);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL, 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int yesid = 0, nicolas = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		yesid = binary_tree_height(tree->left);
		yesid += 1;
	}
	if (tree->right)
	{
		nicolas = binary_tree_height(tree->right);
		nicolas += 1;
	}
	return (yesid - nicolas);
}
