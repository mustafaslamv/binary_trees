#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Integer value to store in the node.
 * Return: Pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
