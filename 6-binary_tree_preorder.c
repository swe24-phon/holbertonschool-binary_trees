#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - through a binary tree using pre-order traversal
 * @tree: a pointer to the parent node of the node
 * @func: function pointer
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
