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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Description: A perfect binary tree is a binary tree in which
 * all interior nodes have two children and all leaves have the
 * same depth or same level[^3^][3].
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
			if (binary_tree_is_perfect(tree->left) &&
				(binary_tree_is_perfect(tree->right)))
			return (1);
	}
	return (0);
}
