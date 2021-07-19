#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = crear_nodo(value);
	binary_tree_t *aux = NULL;

	if (!nodo || !parent)
		return (NULL);
	if (hijo_izq(parent))
		aux = remover_izq(hijo_izq(parent));
	insert_izq(nodo, parent);
	insert_izq(aux, nodo);
	return (nodo);
}
