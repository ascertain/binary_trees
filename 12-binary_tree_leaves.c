#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in tree
 * @tree: the tree from root
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lft, rht;

	if (tree == NULL)
		return (0);
	lft = binary_tree_leaves(tree->left);
	rht = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (add(lft, rht));
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
