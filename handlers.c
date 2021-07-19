#include "binary_trees.h"

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
/*
void swap_der(binary_tree_t *padre)
{

}

void swap_izq(binary_tree_t *padre)
{

}
*/
binary_tree_t *crear_nodo(int valor)
{
	binary_tree_t *nuevo_nodo = malloc(sizeof(binary_tree_t));
	if (!nuevo_nodo)
		return (NULL);
	nuevo_nodo->n = valor;
	nuevo_nodo->right = NULL;
	nuevo_nodo->left = NULL;
	nuevo_nodo->parent = NULL;
	return (nuevo_nodo);
}

void liberar_nodo(binary_tree_t *nodo)
{
	free(nodo);
}

void liberar_arbol(binary_tree_t *root)
{
	if (existe(hijo_der(root)))
		liberar_arbol(hijo_der(root));
	if (existe(hijo_izq(root)))
		liberar_arbol(hijo_izq(root));
	liberar_nodo(root);    
}

binary_tree_t *remover_izq(binary_tree_t *a_remover)
{
	a_remover->parent->left = NULL;
	a_remover->parent = NULL;
	return (a_remover);
}

binary_tree_t *remover_der(binary_tree_t *a_remover)
{
	a_remover->parent->right = NULL;
	a_remover->parent = NULL;
	return (a_remover);
}

