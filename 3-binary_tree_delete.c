#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: the tree to be deleted
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/*node->parent = NULL;
	node->right = NULL;
	node->left = NULL;*/
	free(tree);
}
