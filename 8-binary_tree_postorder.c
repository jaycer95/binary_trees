#include "binary_trees.h"
/**
 * binary_tree_postorder - postorder traverse tree
 * @tree: tree to be traversed
 * @func: function to be applied on each node
 * Return: void
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
