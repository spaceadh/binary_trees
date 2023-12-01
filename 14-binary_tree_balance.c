#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_balance - Function measures the balance factor
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * the balance factor
 * Return: 0
*/
=======
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */
>>>>>>> bfa0552ebff067a30adcf9237144fbe06296cb59

size_t binary_tree_height_b(const binary_tree_t *tree)
{
<<<<<<< HEAD
	int left_height, right_height;
=======
	size_t left = 0;
	size_t right = 0;
>>>>>>> bfa0552ebff067a30adcf9237144fbe06296cb59

	if (tree == NULL)
	{
		return (0);
	}
<<<<<<< HEAD

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: 0 - If Null
*/
=======
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */
>>>>>>> bfa0552ebff067a30adcf9237144fbe06296cb59



int binary_tree_balance(const binary_tree_t *tree)
{
<<<<<<< HEAD
	size_t left, right;

	if (tree == NULL)
=======
	int right = 0, left = 0, total = 0;

	if (tree)
>>>>>>> bfa0552ebff067a30adcf9237144fbe06296cb59
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
<<<<<<< HEAD

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
=======
	return (total);
}
>>>>>>> bfa0552ebff067a30adcf9237144fbe06296cb59
