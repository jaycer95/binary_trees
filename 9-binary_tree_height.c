#include "binary_trees.h"
/**
 *binary_tree_height - mesures the height of the tree
 * @tree: the tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n, m;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	n = binary_tree_height(tree->left);
	m = binary_tree_height(tree->right);
	if (n >= m)
		return (n + 1);
	else
		return (m + 1);
}
