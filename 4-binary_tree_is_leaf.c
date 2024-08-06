#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - find the leaf node
 * @node: a pointer to root node
 * Return: integer
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return ((node->left == NULL && node->right == NULL) ||
		(binary_tree_is_leaf(node->left) +
		 binary_tree_is_leaf(node->right)));
}
