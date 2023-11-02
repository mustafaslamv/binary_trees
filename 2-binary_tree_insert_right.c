#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new right child node.
 * @parent: Pointer to the parent node.
 * @value: Integer value to store in the new node.
 * Return: Pointer to the newly created right child node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right, *previous_right;

	if (parent == NULL)
		return (NULL);

	previous_right = parent->right;
	new_right = binary_tree_node(parent, value);

	if (new_right == NULL)
		return (NULL);

	parent->right = new_right;

	if (previous_right)
	{
		previous_right->parent = new_right;
		new_right->right = previous_right;
	}

	return (new_right);
}
