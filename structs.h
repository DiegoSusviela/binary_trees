#ifndef STRUCT_H
#define STRUCT_H

/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

typedef struct list list_t;

#endif /* STRUCT_H */
