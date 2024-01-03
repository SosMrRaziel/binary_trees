#include "binary_trees.h"


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	/* Check if allocation failed */
	if (new == NULL)
		return (NULL);

	/* Assign the value and parent to the new node */
	new->n = value;
	new->parent = parent;

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
