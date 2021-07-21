#include "binary_trees.h"
#include "handlers.c"

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !izq(node) && !der(node))
		return (1);
	return (0);
}
