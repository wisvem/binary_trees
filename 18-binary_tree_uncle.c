#include "binary_trees.h"

/**
* brother - finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling node,
* NULL if node is NULL or the parent is NULL or
* if node has no sibling
**/
binary_tree_t *brother(binary_tree_t *node)
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

/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to the node to find the uncle
* Return: a pointer to the uncle node
* if node is NULL, return NULL
* if node has no uncle, return NULL
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
	{
		return (NULL);
	}
	if ((*node).parent == NULL)
	{
		return (NULL);
	}
	return (brother((*node).parent));
}
