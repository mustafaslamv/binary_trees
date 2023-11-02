#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_of_tree, size_of_tree, i, two_pow_h = 1;

	if (tree == NULL)
		return (0);

	height_of_tree = binary_tree_height(tree);
	size_of_tree = binary_tree_size(tree);

	for (i = 0; i <= height_of_tree; i++)
		two_pow_h *= 2;

	return (size_of_tree == two_pow_h - 1);
}

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: Pointer to the root node.
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_size - Calculate the size of a binary tree.
 * @tree: Pointer to the root node.
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);

	left_size = get_size(tree->left, &left_size);
	right_size = get_size(tree->right, &right_size);

	return (1 + right_size + left_size);
}
