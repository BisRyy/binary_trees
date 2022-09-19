#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the parent node
 *
 * @value: value assigned to the new node
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = NULL;

	if (!parent)
		return (NULL);

	leftNode = binary_tree_node(parent, value);
	if (parent->left)
	{
		leftNode->left = parent->left;
		parent->left->parent = leftNode;
	}
	parent->left = leftNode;

	return (leftNode);
}
