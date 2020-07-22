#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node at the left of an other
 *@parent: the parent of the node to insert
 *@value: the data
 *Return: binary tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	new->n = value;
	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;
		return (new);
}
