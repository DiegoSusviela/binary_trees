#include "binary_trees.h"
#include "121-avl_insert.c"
#include "122-array_to_avl.c"
#include "103-binary_tree_rotate_left.c"
#include "104-binary_tree_rotate_right.c"
#include "14-binary_tree_balance.c"

/**
* sorted_array_to_avl - builds an AVL tree from a sorted array.
* @array: pointer to the first element of the array to be converted.
* @size:  number of element in the array.
* Return: pointer to the root node of the created AVL tree, or NULL on failure.
*/
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	return (array_to_avl(array, size));
}
