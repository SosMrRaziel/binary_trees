#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Description: This function recursively traverses the left and right subtrees
 * of the given tree and returns the sum of the nodes that have at least one
 * child, plus one for the current node if it is not NULL.
 * Return: Number of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If the tree is NULL, return 0 */
	/* If the tree has no children, it is not a */
	/* node with at least 1 child, so return 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Otherwise, recursively find the number of nodes */
	/* with at least 1 child in the left and right subtrees */
	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	/* Return the sum of the number of nodes with at */
	/* least 1 child in the subtrees, plus one for the current node */
	return (left_nodes + right_nodes + 1);
}
