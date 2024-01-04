#include "binary_trees.h"

/**

binary_tree_sibling - Finds the sibling of a node
@node: Pointer to the node to find the sibling
Description: This function checks if the node is not NULL and has a parent.
Then, it compares the node with the left and right child of the parent,
and returns the opposite child as the sibling. If the node has no sibling,
it returns NULL.
Return: Pointer to the sibling node, or NULL if no sibling or node is NULL */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	if (node == node->parent->right)
		return (node->parent->left);

return (NULL);
}
