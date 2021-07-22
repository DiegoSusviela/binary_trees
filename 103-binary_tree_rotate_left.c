#include "binary_trees.h"

/**
* binary_tree_rotate_left - performs a left-rotation on a binary tree.
* @tree: pointer to the root node of the tree to rotate.
* Return: pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *holder, *holder2;

	if (!tree || !tree->right)
		return (tree);

	holder = tree->right, holder2 = tree->parent;

	tree->right = tree->right->left;
	if (tree->right)
		holder->left->parent = tree;
	tree->parent = tree->right;
	holder->left = tree;
	holder->parent = holder2;
	tree->parent = holder;
	if (holder2)
	{
		if (holder2->left == tree)
			holder2->left = holder;
		else
			holder2->right = holder;
	}
	return (holder);
}
