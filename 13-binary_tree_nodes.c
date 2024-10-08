#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in a binary tree
 *
 * @tree: pointer to the root node of the binary tree
 *
 * Return: number of nodes in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0, right_nodes = 0;
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count = 1;
	left_nodes += binary_tree_nodes(tree->left);
	right_nodes += binary_tree_nodes(tree->right);
	return (count + left_nodes + right_nodes);
}
