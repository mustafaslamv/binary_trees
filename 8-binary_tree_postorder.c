#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree in post-order.
 * @tree: Pointer to the root of the tree.
 * @func: Pointer to a function to be called on each node's value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
