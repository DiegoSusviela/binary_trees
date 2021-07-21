#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}

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
	return (1 + binary_tree_nodes(tree->right) +
	binary_tree_nodes(tree->left));
}
