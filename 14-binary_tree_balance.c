#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate balance factor of a node in a binary tree.
 * @tree: Pointer to the root of the tree.
 * Return: Balance factor of the node.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_balance(tree->left);
	rightHeight = binary_tree_balance(tree->right);

	return (leftHeight - rightHeight);
}
