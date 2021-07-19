#ifndef HANDLERS_H
#define HANDLERS_H


/* handlers */

binary_tree_t *padre(binary_tree_t *nodo);
binary_tree_t *hijo_der(binary_tree_t *nodo);
binary_tree_t *hijo_izq(binary_tree_t *nodo);
binary_tree_t *existe(binary_tree_t *nodo);
void insert_der(binary_tree_t *a_insertar, binary_tree_t *lugar);
void insert_izq(binary_tree_t *a_insertar, binary_tree_t *lugar);
binary_tree_t *crear_nodo(int valor);
void liberar_nodo(binary_tree_t *nodo);
void liberar_arbol(binary_tree_t *root);
binary_tree_t *remover_izq(binary_tree_t *a_remover);
binary_tree_t *remover_der(binary_tree_t *a_remover);

/* Binary tree  functions */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif /* HANDLERS_H */
