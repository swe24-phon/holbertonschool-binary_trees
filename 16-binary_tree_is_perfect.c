#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * tree_perfect_rec - check if the tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: depth of the tree
**/
size_t tree_perfect_rec(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		left = tree_perfect_rec(tree->left) + 1;
		right = tree_perfect_rec(tree->right) + 1;
		if (left == right && left != 0 && right != 0)
		{
			return (right);
		}
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the binary tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_perfect_rec(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
