#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree.
 * @tree: Pointer to the node for which to calculate the depth.
 * Return: Depth of the node in the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
