#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 * Return: depth of the node, if @tree is NULL, returns 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !padre(tree))
		return (0);
	return (binary_tree_depth(padre(tree)) + 1);
}
