#include "binary_trees.h"

/**
 * binary_tree_insert_left: Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: Pointer to node to insert in Parent left-child
 * @value:  Value to insert
 * 
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == 0)
        return (0);

    new = binary_tree_node(parent, value);
    if (new == 0)
        return (0);
    
    if (parent->left != 0)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }
    parent->left = new;

    return (new);
}
