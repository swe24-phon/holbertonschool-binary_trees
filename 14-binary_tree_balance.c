#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_height - measures the height of a binary tree
*@tree: a pointer to root node
*Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left > right)
{
return (left + 1);
}
else
{
return (right + 1);
}
}
/**
*binary_tree_balance - measures balance factor of binary
*tree
*@tree: a pointer to the root node of tree to measure
*Return: 0 if tree is NULL or pointer if otherwise
*/
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left = 0, right = 0;
if (tree == NULL)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (left - right;
}
