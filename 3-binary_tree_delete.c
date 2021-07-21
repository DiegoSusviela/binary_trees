#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the tree node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (der(tree))
		liberar_arbol(der(tree));
	if (izq(tree))
		liberar_arbol(izq(tree));
	free(nodo);
	nodo = NULL;
}
