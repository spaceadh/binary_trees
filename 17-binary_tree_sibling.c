#include "binary_trees.h"

/**
 * binary_tree_sibling - function finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to sibling node
 * Else: NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
