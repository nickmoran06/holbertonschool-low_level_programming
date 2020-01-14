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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1, if is perfect, If tree is NULL 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int flag = 0, flag1 = 0, h_left = 0, h_right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	h_left =  binary_tree_height(tree->left);
	h_right =  binary_tree_height(tree->right);

	if (tree->left && tree->right)
	{
		flag = binary_tree_is_perfect(tree->left);
		flag1 = binary_tree_is_perfect(tree->right);
	}
	if (flag == 0 || flag1 == 0)
		return (0);
	if (h_left - h_right == 0 && (flag == 1 && flag1 == 1))
		return (1);
	return (0);
}
/**
 * binary_tree_is_complete -  function that checks if a binary tree is complete
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if binary tree is complete else return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{

	int hight_left = 0, hight_right = 0;
	int perfect_left = 0, perfect_right = 0;

	if (!tree)
		return (0);

	hight_left = binary_tree_height(tree->left);
	hight_right = binary_tree_height(tree->right);

	if (hight_left == hight_right)
	{
		perfect_left = binary_tree_is_perfect(tree->left);
		perfect_right = binary_tree_is_perfect(tree->right);
		if (perfect_left * perfect_right)
			return (1);
	}
	return (0);
}
