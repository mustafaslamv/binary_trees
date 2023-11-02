#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the balance factor of a node.
 * @tree: Pointer to the root of the tree.
 * Return: Balance factor of the node, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int leftHeight, rightHeight;

	leftHeight = binary_tree_balance(tree->left);
	rightHeight = binary_tree_balance(tree->right);

	return (leftHeight - rightHeight);
}
