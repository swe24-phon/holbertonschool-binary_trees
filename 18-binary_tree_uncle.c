#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find uncle
 * Return: If node is NULL or has no uncle, return NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent, *parent, *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		uncle = grandparent->right;
	}
	else
	{
		uncle = grandparent->left;
	}
	return (uncle);
}
