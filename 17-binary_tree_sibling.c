#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 * Return: pointer to the sibling node,
 * if @node is NULL, the parent is NULL or has no sibling, returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if ((node->parent->left) == node)
		return (node->parent->right);
	return (node->parent->left);
}
