#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of the tree, if @tree is NULL, returns 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(der(tree)) + binary_tree_size(izq(tree)));
	return (0);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 * Return: depth of the node, if @tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !padre(tree))
		return (0);
	return (binary_tree_depth(padre(tree)) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, if tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (!tree)
		return (0);
	right_height = binary_tree_height(der(tree));
	left_height = binary_tree_height(izq(tree));
	if (right_height >= left_height)
		return (1 + right_height);
	return (1 + left_height);
}

// ---------------------------------------------------------

/**
 * tree_almost_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: size of the tree, if @tree is NULL, returns 0.
 */
size_t tree_almost_size(const binary_tree_t *tree, size_t height)
{
	if (tree && (binary_tree_depth(tree) < height))
		return (1 + tree_almost_size(der(tree)) + tree_almost_size(izq(tree)));
	return (0);
}

/**
* cant_nodes - todo.
* @height: todo.
*/
size_t cant_nodes(size_t height)
{
	if (height)
		return (2 * cant_nodes(height - 1));
	return (1);
}

/**
* levelorder_aux - goes through a binary tree using level-order traversal.
* @tree: pointer to the root node of the tree to traverse.
* @level: level to goes through.
* @func: pointer to a function to call for each node.
*/

size_t pichus_contador(const binary_tree_t *tree, size_t level, size_t pichu)
{
	if (!tree)
		return (pichu);
	if (!level && )
		/*return es la suma de lso dos llamados*/ 
		/*case dentro de if arriba, apra los escenarios de 0.1.2*/
	pichus_contador(tree->left, level - 1, pichu);
	pichus_contador(tree->right, level - 1, pichu);
}

/**
* binary_tree_is_complete - goes through a binary tree using level-order.
* @tree: pointer to the root node of the tree to traverse.
* @func: pointer to a function to call for each node.
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree || !func)
		return;
	
	if (tree_almost_size(tree, binary_tree_height(tree)) < (cant_nodes(binary_tree_height(tree) - 1)))
		return (0);
	
	if (pichus_contador(tree, binary_tree_height(tree) - 1, cant_nodes(binary_tree_height(tree) - 1)) < binary_tree_size(tree))
		return (0);
	return (1);
}
