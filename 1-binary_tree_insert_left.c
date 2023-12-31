#include "binary_trees.h"

/**
 * binary_tree_insert_left -  a function that inserts a node as the left-child
 * of another node.
 *
 * @parent: left_child node pointer
 * @value: Value to store in the new node.
 * Return: 0
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
