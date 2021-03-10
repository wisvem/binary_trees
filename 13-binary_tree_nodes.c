#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
* Return: count of nodes, 0 if tree is NULL
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int c = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if ((*tree).right != NULL || (*tree).left != NULL)
	{
		c = 1 + binary_tree_nodes((*tree).right) + binary_tree_nodes((*tree).left);
	}
	return (c);
}
