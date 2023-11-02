#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new left child node.
 * @parent: Pointer to the parent node.
 * @value: Integer value to store in the new node.
 * Return: Pointer to the newly created left child node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left, *previous_left;

	if (parent == NULL)
		return (NULL);

	previous_left = parent->left;
	new_left = binary_tree_node(parent, value);

	if (new_left == NULL)
		return (NULL);

	parent->left = new_left;

	if (previous_left)
	{
		previous_left->parent = new_left;
		new_left->left = previous_left;
	}

	return (new_left);
}
