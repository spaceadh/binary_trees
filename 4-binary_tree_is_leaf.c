#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 - if leaf
 * Else: 0
 */

int binary_tree_is_leaf(const binary_tree_t *leaf)
{
	if (leaf == NULL)
		return (0);
	if (leaf->left == NULL && leaf->right == NULL)
		return (1);
	return (0);
}
