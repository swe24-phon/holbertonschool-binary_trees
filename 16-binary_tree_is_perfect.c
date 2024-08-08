#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: the binary tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (1);
    if (tree->left == NULL || tree->right == NULL)
        return (0);
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height != right_height)
        return (0);
    return (binary_tree_is_perfect(tree->left) &&
    	binary_tree_is_perfect(tree->right));
}
