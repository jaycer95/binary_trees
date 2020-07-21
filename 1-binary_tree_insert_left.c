#include "binary_trees.h"
/**
 * 
 * 
 * 
 * */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new, *tmp = NULL;
    if (parent == NULL)
        return NULL;
    new = malloc(sizeof(binary_tree_t));
    new->parent = parent;
    new->n = value;
    if (new == NULL)
        return NULL;
    if (parent->left)
    {    
        tmp = parent->left;
        parent->left->parent = new;
        new->left = tmp;
    }
        parent->left = new;
    return new;
}