#include "binary_trees.h"
#include "handlers.c"

/**
 * binary_tree_node - creates a binary tree node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to store in the new node.
 * Return: pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = crear_nodo(value);

	if (!nodo)
		return (NULL);
	nodo->parent = parent;
	return (nodo);
}
