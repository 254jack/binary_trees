#include "binary_trees.h"
/**
 * binary_tree_left_depth - a function that checks if a binary tree is full
 *
 * @tree: tree pointer
 * Return: height
 */
int binary_tree_left_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);
	if (tree->left)
		depth = 1 + binary_tree_left_depth(tree->left);
	return (depth);
}
/**
 * is_perfect - a function that checks if a binary tree is full
 *
 * @tree: tree pointer
 * @depth: depth
 * @level: level
 * Return: 0
 */
size_t is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
	{
		return (depth == level);
	}
	if (!tree->right || !tree->left)
		return (0);
	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is full
 *
 * @tree: tree pointer
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth_left = binary_tree_left_depth(tree);

	return (is_perfect(tree, depth_left, 0));
}
