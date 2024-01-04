#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A binary tree is full if every node has either
 * zero or two children. This function uses recursion to check
 * the left and right subtrees of each node.
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* check if are the leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if are not the leaf*/
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
