#include "binary_trees.h"

/**
 * binary_tree_height - Compute the height of a binary tree.
 * @tree: Pointer to the root of the tree.
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
