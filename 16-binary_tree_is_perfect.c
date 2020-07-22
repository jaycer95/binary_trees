#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: tree to be checked
 * Return: 0 or 1
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (!tree->left && !tree->right)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);
}
/**
 * binary_tree_height - tree height
 * @tree: tree to calculate height
 * Return: height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t n, m;
if (tree == NULL)
return  (0);
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
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: tree to be checked
 * Return: 0 or 1
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
return (1);
return (0);
}
