#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);
	/* creat a new node */
	new = binary_tree_node(parent, value);

	/* Check if parent already has a left child */
	if (parent->left != NULL)
	{
		/* Set the new node as the left child of the parent */
		new->left = parent->left;

		/* Set the parent of the old left child as the new node */
		parent->left->parent = new;
	}
	else
	{
		/* Set the new node as the left child of the parent */
		new->left = NULL;
	}

	/* Set the right child of the new node as NULL */
	new->right = NULL;

	/* Set the parent's left child as the new node */
	parent->left = new;

	return (new);
}
