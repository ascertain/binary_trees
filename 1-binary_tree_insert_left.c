#include "binary_trees.h"
/**
 * binary_tree_insert_left - Creates a left node to parent node
 * @parent: the parent whose left node is to be created
 * @value: the value to be assigned to the created node
 * Return: returns the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *og;

	if (node == NULL || parent == NULL)
		return (NULL);
	node->n = value;
	if (parent->left != NULL)
	{
		og = parent->left;
		node->left = og;
		parent->left = node;
		og->parent = node;
		node->parent = parent;
		node->right = NULL;
	}
	else
	{
		parent->left = node;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}
