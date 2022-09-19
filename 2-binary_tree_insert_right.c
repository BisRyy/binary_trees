#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the created node (Success) or
 *		NULL (Failure or if @parent is NULL)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *RightNode;

	if (parent == NULL)
		return (NULL);

	RightNode = binary_tree_node(parent, value);

	if (RightNode == NULL)
		return (NULL);

	RightNode->right = parent->right;

	if (RightNode->right != NULL)
		RightNode->right->parent = RightNode;

	parent->right = RightNode;
	return (RightNode);
}
