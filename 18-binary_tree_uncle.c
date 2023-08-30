#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of the node
 * @node: the node to check their uncle
 * Return: NULL if no uncle or error, otherwise, the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	return (binary_tree_sibling(parent));
}
/**
 * binary_tree_sibling - finds the sibling of the node
 * @node: the node to be checked for siblings existence
 * Return: the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || parent == NULL)
		return (NULL);
	if ((parent->left == node) && (parent->right != NULL))
		return (parent->right);
	if ((parent->right == node) && (parent->left != NULL))
		return (parent->left);
	return (NULL);
}
