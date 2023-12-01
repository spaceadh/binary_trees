#include "binary_trees.h"

/**
 * binary_tree_balance - Function measures the balance factor
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * the balance factor
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 - If Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
