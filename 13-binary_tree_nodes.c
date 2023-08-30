#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the non-leaf nodes
 * @tree: the root node
 * Return: the number of non-leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lft, rht;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lft = binary_tree_nodes(tree->left);
	rht = binary_tree_nodes(tree->right);
	return (add(lft, rht) + 1);
}
/**
 * add - adds two nodes
 * @a: first node
 * @b: second node
 * Return: the addition
 */
size_t add(size_t a, size_t b)
{
	return (a + b);
}
