#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of a node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: pointer to the new node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;
	binary_tree_t *aux = NULL;

	if (!parent)
		return (NULL);
	nodo = crear_nodo(value);
	if (!nodo)
		return (NULL);
	if (der(parent))
		aux = remover_der(der(parent));
	insert_der(nodo, parent);
	insert_der(aux, nodo);
	return (nodo);
}
