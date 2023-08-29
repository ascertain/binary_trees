#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: the tree to be deleted
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node = tree;

	if (node == NULL)
		return;
	binary_tree_delete(node->left);
	binary_tree_delete(node->right);
	if (node->right == NULL && node->left == NULL)
		free(node);
	free(tree);
}
