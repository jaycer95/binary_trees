#include "binary_trees.h"
/**
 * binary_tree_depth - calculate tree depth
 * @tree: binary tree
 * Return: depth
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t n;
if (tree == NULL || !tree->parent)
return (0);
n = binary_tree_depth(tree->parent);
return (n + 1);
}
