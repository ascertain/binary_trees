#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates a right child to the parent node
 * @parent: the target parent node
 * @value: the value to be assigned to the right child of the parent
 * Return: returns the new created node (the right child)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *og;

	if (node == NULL || parent == NULL)
		return (NULL);
	node->n = value;
	if (parent->right != NULL)
	{
		og = parent->right;
		og->parent = node;
		parent->right = node;
		node->right = og;
		node->left = NULL;
		node->parent = parent;
	}
	else
	{
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
		parent->right = node;
	}
	return (node);
}
