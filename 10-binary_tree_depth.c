#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;
	current = tree;

	while (current->parent != NULL)
	{
		current = current->parent;
		depth++;
	}

	return (depth);
}
