#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree, 0 if tree is NULL or has no children
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_height, left_height, right_height;

	/* If the tree is NULL, return 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Otherwise, recursively find the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	/* Compare the left and right heights and assign the maximum to max_height */
	if (left_height > right_height)
		max_height = left_height + 1;
	else
		max_height = right_height + 1;

	return (max_height);
}
