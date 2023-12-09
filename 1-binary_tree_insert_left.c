#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function inserts a node as the
 * the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 * Return: Pointer to the new created node
 * Else: NULL - If failure or parent node is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		added_node->left = parent->left;
		parent->left->parent = added_node;
	}
	parent->left = added_node;
	return (added_node);
}
