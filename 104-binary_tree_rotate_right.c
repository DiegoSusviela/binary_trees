#include "binary_trees.h"

/**
* binary_tree_rotate_right - performs a ri-rotation on a binary tree.
* @tree: pointer to the root node of the tree to rotate.
* Return: pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *holder, *holder2;

	if (!tree || !tree->left)
		return (tree);

	holder = tree->left, holder2 = tree->parent;

	tree->left = tree->left->right;
	if (tree->left)
		holder->right->parent = tree;
	tree->parent = tree->left;
	holder->right = tree;
	holder->parent = holder2;
	tree->parent = holder;
	if (holder2)
	{
		if (holder2->right == tree)
			holder2->right = holder;
		else
			holder2->left = holder;
	}
	return (holder);
}
