#include "binary_trees.h"

/**
 * binary_tree_height: Finding the height of any given node
 * 
 * @tree: Pointer to the root node of the tree to measure the height.
 * 
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    
    size_t left_depth = binary_tree_height(tree->left);
    size_t right_depth = binary_tree_height(tree->right);

    if (left_depth > right_depth)
        return (left_depth + 1);
    else
        return (right_depth + 1);
}
