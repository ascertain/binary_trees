#include "binary_trees.h"
/**
 * binary_tree_preorder - Preorder traversal through a tree
 * @tree: the tree to be traversed through
 * @func: the function to be called on each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, (func));
	binary_tree_preorder(tree->right, (func));
}
