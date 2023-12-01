#include "binary_trees.h"

/**
 * binary_tree_height - Function goes through a binary tree
 * using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 - If Null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((left > right) ? left : right);
	}
}
