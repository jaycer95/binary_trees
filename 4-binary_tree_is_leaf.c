#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is leaf
 * @node: node to check
 * Return: 0 or 1
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);
if (!node->right && !node->right)
return (1);
binary_tree_is_leaf(node->left);
binary_tree_is_leaf(node->right);
return (0);
}
