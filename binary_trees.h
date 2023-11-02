#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 *
 * Description: Structure representing a node in a binary tree
 */
struct binary_tree_s
{
	int n;						  /* Integer stored in the node */
	struct binary_tree_s *parent; /* Pointer to the parent node */
	struct binary_tree_s *left;	  /* Pointer to the left child node */
	struct binary_tree_s *right;  /* Pointer to the right child node */
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
 * struct QueueNode - Structure for a node in the queue
 * @treeNode: Pointer to a binary tree node
 * @next: Pointer to the next node in the queue
 *
 * Description: Structure representing a node in the queue
 */
struct QueueNode
{
	binary_tree_t *treeNode; /* Pointer to a binary tree node */
	struct QueueNode *next;	 /* Pointer to the next node in the queue */
};

/**
 * struct Queue_t - Structure for a queue
 * @front: Pointer to the front of the queue
 * @rear: Pointer to the rear of the queue
 *
 * Description: Structure representing a queue
 */
typedef struct Queue_t
{
	struct QueueNode *front; /* Pointer to the front of the queue */
	struct QueueNode *rear;	 /* Pointer to the rear of the queue */
} Queue_t;

/* Function Prototypes */
void binary_tree_print(const binary_tree_t *);

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
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* Binary Search Tree (BST) Functions */
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);

/* AVL Tree Functions */
int binary_tree_is_avl(const binary_tree_t *tree);
int binary_tree_is_complete(const binary_tree_t *tree);
avl_t *avl_insert(avl_t **tree, int value);

#endif /* BINARY_TREE_H */
