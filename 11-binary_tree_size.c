#include "binary_trees.h"
/**
 * binary_tree_size - Gets n of nodes from node to leaf ancestors (included)
 * @tree: the root node
 * Return: 0 if null, the size if otherwise
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	lft = binary_tree_size(tree->left);
	rht = binary_tree_size(tree->right);
	return ((add(lft, rht) + 1));
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
