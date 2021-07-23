#include "binary_trees.h"
#include "102-binary_tree_is_complete.c"

/**
* no_es_legal - todo.
* @tree: todo.
* @n: todo.
* Return: todo.
*/
int no_es_legal(const binary_tree_t *tree, int n)
{
	int izq, der;

	if (!tree)
		return (1);
	if (tree->n < n)
	{
		izq = no_es_legal(tree->left, n);
		der = no_es_legal(tree->right, n);
		if (izq && der)
			return (1);
	}
	return (0);
}

/**
* binary_tree_is_heap - todo.
* @tree: todo.
* Return: todo.
*/
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (no_es_legal(tree->left, tree->n) && no_es_legal(tree->right, tree->n))
		if (!tree->left || binary_tree_is_heap(tree->left))
			if (!tree->right || binary_tree_is_heap(tree->right))
				if (binary_tree_is_complete(tree))
					return (1);
	return (0);
}
