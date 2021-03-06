#include "binary_trees.h"
/**
 * binary_tree_height - tree height
 * @tree: tree to calculate height
 * Return: height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t n, m;
if (tree == NULL)
return (0);
n = binary_tree_height(tree->left);
m = binary_tree_height(tree->right);
if (n >= m)
return (n + 1);
else
return (m + 1);
}
/**
 * binary_tree_balance - check if tree is balanced
 * @tree: tree to check
 * Return: 0 or 1
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
int diff;
if (tree == NULL)
return (0);
diff = binary_tree_height(tree->left) - binary_tree_height(tree->right);
return (diff);
}
