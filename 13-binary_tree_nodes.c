#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least one child in a tree.
 * @tree: Pointer to the root of the tree.
 * Return: Number of nodes with at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t nodes = 0;

	if (tree->left || tree->right)
		nodes++;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
