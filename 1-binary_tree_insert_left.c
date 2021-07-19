#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of a node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 * Return: pointer to the new node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;
	binary_tree_t *aux = NULL;

	if (!parent)
		return (NULL);
	nodo = crear_nodo(value);
	if (!nodo)
		return (NULL);
	if (hijo_izq(parent))
		aux = remover_izq(hijo_izq(parent));
	insert_izq(nodo, parent);
	insert_izq(aux, nodo);
	return (nodo);
}
