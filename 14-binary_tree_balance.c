#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: number of nodes  with at least 1 child in @tree,
 * if @tree is NULL, returns 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((int)binary_tree_height(hijo_izq(tree)) -
	(int)binary_tree_height(hijo_der(tree)));
}
