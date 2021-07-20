#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a tree using in-order traversal.
 * if tree or func is NULL, do nothing.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(izq(tree), func);
	func(info_dato(tree));
	binary_tree_inorder(der(tree), func);
}
