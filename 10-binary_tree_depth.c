#include "binary_trees.h"
/**
 * binary_tree_depth - a function that checks the depth
 * of a node in a binary tree
 *
 * @tree: tree pointer
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int tree_depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		tree_depth = 1 + binary_tree_depth(tree->parent);
	return (tree_depth);
}
