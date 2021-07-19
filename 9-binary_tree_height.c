#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, if tree is NULL, returns 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	right_height = binary_tree_height(hijo_der(tree));
	left_height = binary_tree_height(hijo_izq(tree));
	if (right_height >= left_height)
		return (1 + right_height);
	return (1 + left_height);
}
