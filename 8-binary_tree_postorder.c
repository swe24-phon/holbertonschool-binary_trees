#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_postorder - goes through binary tree using
*post-order traversal
*@tree: a pointer to the root node of tree to traverse
*@func: function pointer to call for each node
*Return: nothing if tree and func is NULL
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
