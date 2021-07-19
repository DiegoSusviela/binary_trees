#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
    binary_tree_t *nodo = node;
    if (node && !hijo_izq(nodo) && !hijo_der(nodo))
        return (1);
    return (0);
}
