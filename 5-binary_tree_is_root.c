#include "binary_trees.h"
/**
 *binary_tree_is_root - checks if the node is a root
 *@node: the node to be checked
 *Return: int
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	else
		return (0);
}
