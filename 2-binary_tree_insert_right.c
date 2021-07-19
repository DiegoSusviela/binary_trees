#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;
	binary_tree_t *aux = NULL;

	if (!parent)
		return (NULL);
	nodo = crear_nodo(value);
	if (!nodo)
		return (NULL);
	if (hijo_der(parent))
		aux = remover_der(hijo_der(parent));
	insert_der(nodo, parent);
	insert_der(aux, nodo);
	return (nodo);
}