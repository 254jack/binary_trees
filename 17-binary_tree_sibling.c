#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds the sibling of a node
 *
 * @node: tree pointer
 * Return: 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (node == parent->left)
		return (parent->right);
	return (parent->left);
}
