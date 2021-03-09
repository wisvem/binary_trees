#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of a binary tree, 0 is tree is NULL
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int ll;
	int lr;

	if (tree == NULL)
	{
		return (-1);
	}
	ll = binary_tree_height((*tree).left);
	lr = binary_tree_height((*tree).right);
	if (lr > ll)
	{
		return (lr + 1);
	}
	else
	{
		return (ll + 1);
	}
}
