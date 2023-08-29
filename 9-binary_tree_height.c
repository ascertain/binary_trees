#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a tree
 * @tree: the tree to be measured
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;
	if (tree->parent == NULL && tree == NULL)
		return (0);

	if (tree == NULL)
		return (-1);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (max(left, right) + 1);
}
size_t max(a, b)
{
	return (a > b) ? a : b;
}
