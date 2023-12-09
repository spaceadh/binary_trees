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
	if (tree == NULL)
	{
		return (0);
	}

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 - If Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
