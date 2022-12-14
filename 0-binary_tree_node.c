#include "binary_trees.h"

/** 
* binary_tree_node: Creates a new binary tree node
* @parent: a pointer to the parent of the node to create
* @value: The value to insert in the new node
*
* Return - NULL if an error occurs, Otherwise - a pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);
    
    new->n = value;
    new->parent = parent;
    new->left = NULL;
    parent->right = NULL;

    return (new);

}
