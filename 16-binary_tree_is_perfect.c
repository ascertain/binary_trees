#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a node has 2 children for each ancestor
 * @tree: the root node
 * Return: 0 if not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if ((tree->left && tree->right))
		return (
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right)
		);
	return (0);
}
/**
 * binary_tree_balance - calculates the balance factor (left to right)
 * @tree: the root node to be measured
 * Return: 0 if null tree, otherwise, the factor number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lefth, righth;

	if (tree == NULL)
		return (0);
	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);
	return ((int)(lefth - righth));
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
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (max(left, right) + 1);
}
