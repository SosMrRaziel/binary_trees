#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Description: A leaf is a node that has no children.
 * This function uses recursion to traverse the tree and count the leaves.
 * Return: The number of leaves in the tree, or 0 if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	/* If the tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the tree has no children, it is a leaf, so return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Otherwise, recursively find the number of */
	/* leaves in the left and right subtrees */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	/* Return the sum of the number of leaves in the subtrees */
	return (left_leaves + right_leaves);
}
