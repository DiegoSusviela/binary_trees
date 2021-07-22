#include "binary_trees.h"

/**
* menor_elemento - todo.
* @nodo: todo.
* Return: todo.
*/
void menor_elemento(bst *nodo)
{
	holder1 = nodo->parent;

}

/**
* remover - todo.
* @nodo: todo.
* Return: todo.
*/
void remover(bst *nodo)
{
	holder1 = nodo->parent;

}

/**
* bst_remove - removes a node from a Binary Search Tree.
* @root: pointer to the root node of the tree where you will remove a node.
* @value: value to remove in the tree.
* Return: pointer to the new root node after removing the desired value.
*/
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *a_rem, *candidato, *holder;

	a_rem = bst_search(root, value));
	candidato = menor_elemento(a_rem);
	if (!candidato || a_rem->left)
		if (a_rem == root)
		{
			free(a_rem);
			return (NULL);
		}
		return (root);

		candidato->left = a_rem->left;
		if (candidato == a_rem->right)
		{
			if (a_rem->left)
				a_rem->left->parent = candidato;
		}
		else
		{
			candidato->parent->left = candidato->right;
			if (candidato->right)
				candidato->right->parent = candidato->parent
			if (a_rem->left)
				a_rem->left->parent = candidato;
			candidato->right = a_rem->right;
			if (a_rem->right)
				a_rem->right->parent = candidato;
		}
		candidato->parent = a_rem->parent;

				a_rem->right->parent = candidato;
		}

	if (a_rem->parent)
	{
		if (a_rem->parent->left == a_rem)
			a_rem->parent->left = candidato;
		else
			a_rem->parent->right = candidato;
	}

	return (root);
}
