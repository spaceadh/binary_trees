#include "binary_trees.h"

/**
 * binary_tree_uncle - function finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to uncle node
 * Else: NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
	}
	else if (grandparent->right == node->parent)
	{
		return (grandparent->left);
	}

	return (NULL);
}
