#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a tree from root node to the target node
 * @tree: the node at which depth would be measured
 * Return: 0 if null or leaf, otherwise, the height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	else
		return(binary_tree_depth(tree->parent) + 1);
}
