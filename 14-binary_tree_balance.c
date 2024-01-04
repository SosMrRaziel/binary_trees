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
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

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


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Description: This function calculates the balance factor of a binary tree,
 * which is the difference between the heights of the left and right subtrees.
 * If the tree is NULL, it returns 0. Otherwise, it recursively calls
 * binary_tree_height on the left
 * and right subtrees and returns the difference.
 *
 * Return: The balance factor of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* If the tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Otherwise, recursively find the height of the left and right subtrees */
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	/* Return the difference between the heights of the subtrees */
	return (left_height - right_height);
}
