#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node in a binary tree.
 * @node: Pointer to the node for which to find the uncle.
 * Return: Pointer to the uncle node or NULL if no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	else
		uncle = node->parent->parent->left;

	return (uncle);
}
