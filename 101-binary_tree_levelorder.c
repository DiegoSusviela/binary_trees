#include "binary_trees.h"
#include "9-binary_tree_height.c"


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
		func(info_dato(tree));
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
