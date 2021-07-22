#include "binary_trees.h"
#include "1-binary_tree_insert_left.c"
#include "2-binary_tree_insert_right.c"

/**
* bst_insert - inserts a value in a Binary Search Tree.
* @tree: double pointer to the root node of the BST to insert the value.
* @value: alue to store in the node to be inserted.
* Return: pointer to the created node, or NULL on failure.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root = *tree;

	if (!*tree)
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}
	if (value == root->n)
		return (NULL);
	if (value > root->n)
	{
		if (root->right)
			return (bst_insert(&root->right, value));
		return ((bst_t *)binary_tree_insert_right(root, value));
	}
	if (root->left)
		return (bst_insert(&root->left, value));
	return ((bst_t *)binary_tree_insert_left(root, value));
}
