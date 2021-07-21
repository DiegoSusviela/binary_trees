#include "binary_trees.h"
#include "handlers.c"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of the tree, if @tree is NULL, returns 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(der(tree)) + binary_tree_size(izq(tree)));
	return (0);
}
