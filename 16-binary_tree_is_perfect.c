#include "binary_trees.h"

/**
 * tree_is_perfect - Helper function to check if binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 0
*/

int tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->right && tree->left)
	{
		left = 1 + tree_is_perfect(tree->left);
		right = 1 + tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->right && !tree->left)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - Function checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int answer = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		answer = tree_is_perfect(tree);
		if (answer != 0)
		{
			return (1);
		}
		return (0);
	}
}
