#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_size - measures the size of a binary tree
*@tree: a pointer to root node to measure size
*Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t tree_size = 1;
if (tree == NULL)
return (0);
tree_size += binary_tree_size(tree->left);
tree_size += binary_tree_size(tree->right);
return (tree_size);
}
