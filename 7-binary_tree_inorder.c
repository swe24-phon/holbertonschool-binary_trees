#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - performs an in-order traversal of a binary tree
 * @tree: the binary tree to traverse
 * @func: the function to call on each node's value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	// Traverse the left subtree
	binary_tree_inorder(tree->left, func);

	// Traverse the root node
	func(tree->n);

	// Traverse the right subtree
	binary_tree_inorder(tree->right, func);
}
