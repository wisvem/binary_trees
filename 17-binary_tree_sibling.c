#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling node,
* NULL if node is NULL or the parent is NULL or
* if node has no sibling
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL)
	{
		return (NULL);
	}
	if ((*node).parent == NULL)
	{
		return (NULL);
	}
	parent = (*node).parent;
	if ((*parent).left != NULL && (*parent).right != NULL)
	{
		if (node == (*parent).left)
			return ((*parent).right);
		return ((*parent).left);
	}
	return (NULL);
}
