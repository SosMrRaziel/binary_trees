#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node in a binary tree
* @node: A pointer to the node to find the uncle
* Description: An uncle is the sibling of a node’s parent.
* If node is NULL, return NULL
* If node has no parent or grandparent, return NULL
* Return: A pointer to the uncle node, or NULL if no uncle exists
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
