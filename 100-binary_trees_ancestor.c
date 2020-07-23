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
	const binary_tree_t *tmp1, *tmp2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	tmp1 = first;
	while (tmp1)
	{
		tmp2 = second;
		while (tmp2)
		{
			if (tmp2 == tmp1)
				return ((binary_tree_t *)tmp1);
			tmp2 = tmp2->parent;
		}
		tmp1 = tmp1->parent;
	}
	return (NULL);
}
