#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function inserts a node as the
 * right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node
 * Else: NULL - if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *added_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	added_node = binary_tree_node(parent, value);
	if (added_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		added_node->right = parent->right;
		parent->right->parent = added_node;
	}
	parent->right = added_node;
	return (added_node);
}
