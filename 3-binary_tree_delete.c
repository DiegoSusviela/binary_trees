#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return;
    liberar_arbol(tree);
}
