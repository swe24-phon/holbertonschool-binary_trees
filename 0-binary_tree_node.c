#include <stdlib.h>
#include "binary_trees.h"
#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: a pointer to the parent node of the node
 * @value: the value to the put into the new node
 * Return: a pointer to new node or NULL if fails
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new != NULL)
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
