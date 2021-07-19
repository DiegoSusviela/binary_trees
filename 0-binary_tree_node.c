#include "binaries.h"
#include "handlers.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = crear_nodo(value);

	if (!nodo || !parent)
		return (NULL);

	nodo->parent = parent;
	return (nodo);
}
