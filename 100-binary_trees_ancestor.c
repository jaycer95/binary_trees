#include "binary_trees.h"
/**
 * binary_tree_sibling - find node sibling
 * @node: node to find its sibling
 * Return: sibling node or NULL
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node == (node->parent)->right && (node->parent)->left)
return ((node->parent)->left);
if (node == (node->parent)->left && (node->parent)->right)
return ((node->parent)->right);
return (NULL);
}
/**
 * binary_tree_uncle - find node uncle
 * @node: node to find uncle
 * Return: uncle node or NULL
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (binary_tree_sibling(node->parent))
return (binary_tree_sibling(node->parent));
return (NULL);
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: the first node
 * @second: the second node
 * Return: pointer to the parent
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (binary_tree_sibling((binary_tree_t *)first) == second)
		return (first->parent);
	if (binary_tree_uncle((binary_tree_t *)first) == second)
		return (second->parent);
	if (binary_tree_uncle((binary_tree_t *)second) == first)
		return (first->parent);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	return (NULL);
}
