#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node.
 *
 * @parent: parent node to create pointer
 * @value: asigned value to new node
 * Return: 0
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
