#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);
	/* Create a new node */
	new = binary_tree_node(parent, value);

	/* Check if parent already has a right child */
	if (parent->right != NULL)
	{
		/* Set the new node as the right child of the parent */
		new->right = parent->right;

		/* Set the parent of the old right child as the new node */
		parent->right->parent = new;
	}

	/* Set the parent's right child as the new node */
	parent->right = new;

	return (new);
}
