#include "binary_trees.h"

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
* checker - goes through a binary tree using level-order.
* @tree: pointer to the root node of the tree to traverse.
* @lvl: pointer to a function to call for each node.
* @pichu: pointer to a function to call for each node.
* Return: 1 if the tree is complete, 0 otherwise.
*/

int checker(const binary_tree_t *tree, size_t lvl, size_t pichu)
{
	if (!tree)
		return (1);
	if (lvl >= pichu)
		return (0);
	return (checker(tree->left, (lvl * 2) + 1, pichu) && checker(tree->right,
	(lvl * 2) + 2, pichu));
}

/**
* binary_tree_is_complete - goes through a binary tree using level-order.
* @tree: pointer to the root node of the tree to traverse.
* Return: 1 if the tree is complete, 0 otherwise.
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (checker(tree, 0, binary_tree_size(tree)));
}
