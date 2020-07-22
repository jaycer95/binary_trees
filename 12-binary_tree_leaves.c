#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves
 * @tree: tree to count its leaves
 * Return: number of leaves
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t n;
if (tree == NULL)
return (0);
if (!tree->left && !tree->right)
return (1);
n = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
return (n);
}
