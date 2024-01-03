#include "binary_trees.h"




size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_height = 0;

    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    if (left_height > right_height)
        max_height = left_height + 1;
    else
        max_height = right_height + 1;

    return (max_height);
}
