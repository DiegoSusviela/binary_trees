#include "binary_trees.h"
#include "handlers.c"

/**
 * binary_tree_preorder - goes through a tree using pre-order traversal.
 * if tree or func is NULL, do nothing.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(info_dato(tree));
	binary_tree_preorder(izq(tree), func);
	binary_tree_preorder(der(tree), func);
}
