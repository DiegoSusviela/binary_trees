#include "binary_trees.h"
#include "handlers.c"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: leaves in tree, if @tree is NULL, returns 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	return (binary_tree_leaves(der(tree)) +
	binary_tree_leaves(izq(tree)));
}
