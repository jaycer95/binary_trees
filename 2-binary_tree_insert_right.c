#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node at right node
 * @parent: parent node
 * @value: value of new node
 * Return: new node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
if (parent->right)
{
parent->right->parent = new;
new->right = parent->right;
}
parent->right = new;
return (new);
}
