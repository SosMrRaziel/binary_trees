#include "binary_trees.h"

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
