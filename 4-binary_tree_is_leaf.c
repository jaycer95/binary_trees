#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is leaf
 * @node: node to check
 * Return: 0 or 1
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node && !node->right && !node->left)
return (1);
return (0);
}
