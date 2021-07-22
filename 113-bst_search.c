#include "binary_trees.h"

/**
* bst_search - todo.
* @tree: todo.
* Return: todo.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (0);

	if (tree->n == value)
		return (tree);
	if (tree->n > value)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
