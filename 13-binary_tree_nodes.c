#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: the tree
 *Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		n += 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (n);
	}
	return (0);
}
