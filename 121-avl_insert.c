#include "binary_trees.h"

/**
* arreglo - todo.
* @tree: todo.
* @value: todo.
*/
void arreglo(avl_t **tree, int value)
{
	int n;

	n = binary_tree_balance(*tree);
	if (n > 1)
	{
		if (value < (*tree)->left->n)
		{
			*tree = binary_tree_rotate_right(*tree);
			return;
		}
		if (value > (*tree)->left->n)
		{
			(*tree)->left = binary_tree_rotate_left((*tree)->left);
			*tree = binary_tree_rotate_right(*tree);
			return;
		}
	}
	if (n < -1)
	{
		if (value > (*tree)->right->n)
		{
			*tree = binary_tree_rotate_left(*tree);
			return;
		}
		if (value < (*tree)->right->n)
		{
			(*tree)->right = binary_tree_rotate_right((*tree)->right);
			*tree = binary_tree_rotate_left(*tree);
			return;
		}
	}
}

/**
* avl_aux - inserts a value in an AVL Tree.
* @tree: pointer to the root of the AVL tree for inserting the value.
* @value: value to store in the node to be inserted.
* Return: pointer to the created node, or NULL on failure.
*/
avl_t *avl_aux(avl_t **tree, int value)
{
	avl_t *nodo;

	if (value < (*tree)->n)
	{
		if (!(*tree)->left)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
		{
			nodo = avl_aux(&((*tree))->left, value);
			if (nodo)
				arreglo(tree, value);
			return (nodo);
		}
	}
	if (value > (*tree)->n)
	{
		if (!(*tree)->right)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
		{
			nodo = avl_aux(&((*tree))->right, value);
			if (nodo)
			{
				arreglo(tree, value);
				return (nodo);
			}
		}
	}
	return (NULL);
}

/**
* avl_insert - inserts a value in an AVL Tree.
* @tree: double pointer to the root of the AVL tree for inserting the value.
* @value:  value to store in the node to be inserted.
* Return: pointer to the created node, or NULL on failure.
*/
avl_t *avl_insert(avl_t **tree, int value)
{
	if (!tree)
		return (NULL);
	if (!*tree)
	{
		*tree = (avl_t *)binary_tree_node(NULL, value);
		return (*tree);
	}
	return (avl_aux(tree, value));
}
