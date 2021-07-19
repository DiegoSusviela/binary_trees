#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node && !hijo_izq(node) && !hijo_der(node))
        return (1);
    return (0);
}
