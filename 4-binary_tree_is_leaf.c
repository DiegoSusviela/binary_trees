#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node && !node->left && node->right)
        return (1);
    return (0);
}
