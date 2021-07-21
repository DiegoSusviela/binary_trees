#include "binary_trees.h"

/**
 * insert_izq - aux function.
 * @a_insertar: idk.
 * @padre: idk.
 */
void insert_izq(binary_tree_t *a_insertar, binary_tree_t *padre)
{
	padre->left = a_insertar;
	if (a_insertar)
		a_insertar->parent = padre;
}

/**
 * remover_izq - aux function.
 * @a_remover: idk.
 * Return: idk.
 */
binary_tree_t *remover_izq(binary_tree_t *a_remover)
{
	a_remover->parent->left = NULL;
	a_remover->parent = NULL;
	return (a_remover);
}

/**
 * binary_tree_insert_left - inserts a node as the left-child of a node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 * Return: pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *aux = NULL;

	if (!parent)
		return (NULL);
	node = binary_tree_node(NULL, value);
	if (!node)
		return (NULL);
	if (parent->left)
		aux = remover_izq(parent->left);
	insert_izq(node, parent);
	insert_izq(aux, node);
	return (node);
}
