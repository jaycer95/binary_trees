#include "binary_trees.h"
/**
 * 
 * 
 * 
 * 
 * */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t n, m;
    if (tree == NULL)
        return 0;
    m = binary_tree_size(tree->left);
    n = binary_tree_size(tree->right);
    return n + m + 1;    
}