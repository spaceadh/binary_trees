#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
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

