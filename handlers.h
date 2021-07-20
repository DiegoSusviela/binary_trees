#ifndef HANDLERS_H
#define HANDLERS_H

/* print */
void binary_tree_print(const binary_tree_t *);

/* handlers */
binary_tree_t *padre(const binary_tree_t *nodo);
binary_tree_t *hijo_der(const binary_tree_t *nodo);
binary_tree_t *hijo_izq(const binary_tree_t *nodo);
int info_dato(const binary_tree_t *nodo);
binary_tree_t *existe(binary_tree_t *nodo);
void insert_der(binary_tree_t *a_insertar, binary_tree_t *lugar);
void insert_izq(binary_tree_t *a_insertar, binary_tree_t *lugar);
binary_tree_t *crear_nodo(int valor);
void liberar_nodo(binary_tree_t *nodo);
void liberar_arbol(binary_tree_t *root);
binary_tree_t *remover_izq(binary_tree_t *a_remover);
binary_tree_t *remover_der(binary_tree_t *a_remover);

/* binary tree functions */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif /* HANDLERS_H */
