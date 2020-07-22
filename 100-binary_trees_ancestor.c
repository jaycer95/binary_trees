#include "binary_trees.h"
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
