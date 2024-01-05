#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Is_Leaf(node)		(!(node)->right && !(node)->left ? 1 : 0)
#define Have_Child(node)	((node)->left || (node)->right ? 1 : 0)
#define Is_Root(node)		(!(node)->parent ? 1 : 0)
#define Find_Sibling(node)	((node)->parent->left == (node) ? (node)->parent->right : (node)->parent->left)
#define Find_Uncle(node)	(!(node)->parent->parent ? NULL : Find_Sibling((node)->parent))

#define Max(a, b)		((a) > (b) ? (a) : (b))

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

typedef struct binary_tree_s binary_tree_t;		/* Binary tree type */
typedef struct binary_tree_s bst_t;			/* Binary Search Tree type */
typedef struct binary_tree_s avl_t;			/* AVL Tree type */
typedef struct binary_tree_s heap_t;			/* Max Binary Heap type */


void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *, int value);
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


#endif /*BINARY_TREES_H*/
