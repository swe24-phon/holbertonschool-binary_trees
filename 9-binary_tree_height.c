#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to root node
 * Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left > right)
		{
			return (left);
		}
		else
		{
			return (right);
		}
	}
}
