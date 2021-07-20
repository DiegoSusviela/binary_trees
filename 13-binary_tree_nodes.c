#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 * Return: number of nodes  with at least 1 child in @tree,
 * if @tree is NULL, returns 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	return (1 + binary_tree_nodes(hijo_der(tree)) +
	binary_tree_nodes(hijo_izq(tree)));
}
