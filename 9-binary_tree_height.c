#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a tree
 * @tree: the tree to be measured
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (max(left, right) + 1);
}
/**
 * max - returns the maximum number among the two arguments
 * @a: first argument number
 * @b: second argument number
 * Return: the highest number
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
