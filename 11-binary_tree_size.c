#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Description: A recursive function that returns the sum of the sizes
 * of the left and right subtrees, plus one for the current node.
 * If the tree is NULL, the size is 0.
 *
 * Return: size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If the tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Otherwise, recursively find the size of the left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	/* Return the sum of the sizes of the subtrees, */
	/* plus one for the current node */
	return (left_size + right_size + 1);
}
