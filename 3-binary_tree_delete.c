#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the tree node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->right)
		liberar_arbol(tree->right);
	if (tree->left)
		liberar_arbol(tree->left);
	free(nodo);
	nodo = NULL;
}
