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

	if (node == NULL || parent == NULL)
		return (NULL);
	node->n = value;
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
		node->parent = parent;
		parent->left = node;
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
