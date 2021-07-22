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
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, if tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	if (right_height >= left_height)
		return (1 + right_height);
	return (1 + left_height);
}

/**
* cant_nodes - count the number of nodes in a binary tree.
* @height: height.
* Return: size of the tree a perfect tree of height.
*/
size_t cant_nodes(size_t height)
{
	size_t i, ret = 1;

	if (!height)
		return (ret);
	for (i = 0; i < height; i++)
		ret = ret * 2;
	return (ret + cant_nodes(height - 1));
}

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of the tree, if @tree is NULL, returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, otherwise 0.
 * if @tree is NULL, returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (cant_nodes(binary_tree_height(tree)) == binary_tree_size(tree));
}
