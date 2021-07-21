#include "binary_trees.h"

/**
 * insert_der - aux function.
 * @a_insertar: idk.
 * @padre: idk.
 */
void insert_der(binary_tree_t *a_insertar, binary_tree_t *padre)
{
	padre->right = a_insertar;
	if (a_insertar)
		a_insertar->parent = padre;
}

/**
 * remover_der - aux function.
 * @a_remover: idk.
 * Return: idk.
 */
binary_tree_t *remover_der(binary_tree_t *a_remover)
{
	a_remover->parent->right = NULL;
	a_remover->parent = NULL;
	return (a_remover);
}

/**
 * binary_tree_insert_right - inserts a node as the right-child of a node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *aux = NULL;

	if (!parent)
		return (NULL);
	node = binary_tree_node(NULL, value);
	if (!node)
		return (NULL);
	if (parent->right)
		aux = remover_der(parent->right);
	insert_der(node, parent);
	insert_der(aux, node);
	return (node);
}
