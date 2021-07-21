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

	if (!tree)
		return (0);
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	if (right_height >= left_height)
		return (1 + right_height);
	return (1 + left_height);
}


/**
* levelorder_aux - goes through a binary tree using level-order traversal.
* @tree: pointer to the root node of the tree to traverse.
* @level: level to goes through.
* @func: pointer to a function to call for each node.
*/
void levelorder_aux(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree)
		return;
	if (!level)
		func(tree->n);
	levelorder_aux(tree->left, level - 1, func);
	levelorder_aux(tree->right, level - 1, func);
}

/**
* binary_tree_levelorder - goes through a binary tree using level-order.
* @tree: pointer to the root node of the tree to traverse.
* @func: pointer to a function to call for each node.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level;

	if (!tree || !func)
		return;

	for (level = 0; level < binary_tree_height(tree); level++)
		levelorder_aux(tree, level, func);
}
