#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: Pointer to the node to print
 * @value: value to print
 *
 * Return: Pointer to the new node (Success) or NULL (Failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *current;

	current = malloc(sizeof(binary_tree_t));
	if (current == NULL)
		return (NULL);

	current->parent = parent;
	current->n = value;
	current->left = current->right = NULL;
	return (current);
}
