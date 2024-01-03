#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Description: A binary tree is a tree data structure in which each node
 * has at most two children, which are referred to as the left child and
 * the right child. The depth of a node is the number of edges from the
 * node to the tree's root node. A root node will have a depth of 0. An
 * empty tree has a depth of 0.
 *
 * Return: the depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Base case: empty tree has depth 0 */
	if (tree == NULL)
		return (0);
	/* Base case: root node has depth 0 */
	if (tree->parent == NULL)
		return (0);
	/* Recursive case: add 1 to the depth of the parent node */
	return (binary_tree_depth(tree->parent) + 1);
}
