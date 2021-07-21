#include "binary_trees.h"
#include "handlers.c"

/**
 * binary_tree_postorder - goes through a tree using post-order traversal.
 * if tree or func is NULL, do nothing.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(izq(tree), func);
	binary_tree_postorder(der(tree), func);
	func(info_dato(tree));
}
