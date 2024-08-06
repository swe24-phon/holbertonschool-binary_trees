#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
*binary_tree_insert_right - adds a node as the right-child
*of another node
*@parent: pointer to the node to insert the right-child
*@value: value to store in the new node
*Return: NULL if failure and parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *temp = NULL, *node = NULL;
if (parent == NULL)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
if (parent->right)
{
temp = parent->right;
node->right = temp;
temp->parent = node;
}
parent->right = node;
return (node);
}
