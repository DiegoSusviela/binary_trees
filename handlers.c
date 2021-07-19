#include "binaries.h"

binary_tree_t *padre(binary_tree_t *nodo)
{
	return (nodo->parent);
}

binary_tree_t *hijo_der(binary_tree_t *nodo)
{
	return (nodo->right);
}

binary_tree_t *hijo_izq(binary_tree_t *nodo)
{
	return (nodo->left);
}

binary_tree_t *existe(binary_tree_t *nodo)
{
	if (nodo)
		return (nodo);
	return (NULL);
}

void insert_der(binary_tree_t *a_insertar, binary_tree_t *lugar)
{
	lugar->right = a_insertar;
}

void insert_izq(binary_tree_t *a_insertar, binary_tree_t *lugar)
{
	lugar->left = a_insertar;
}

void swap_der(binary_tree_t *padre)
{
	
}

void swap_izq(binary_tree_t *padre)
{

}