#include "binary_trees.h"

/**
 * binary_tree_depth: Finding the depth of any given node
 * 
 * @tree: Pointer to the root node of the tree to measure the height.
 * 
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
