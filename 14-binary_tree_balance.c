#include "binary_trees.h"
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
