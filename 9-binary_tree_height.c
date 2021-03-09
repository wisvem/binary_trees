#include "binary_trees.h"

/**
* scale - aux function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of a binary tree, 0 is tree is NULL
**/
int scale(const binary_tree_t *tree)
{
	int ll = 1;
	int lr = 1;

	if (tree == NULL)
	{
		return (-1);
	}
	ll += scale((*tree).left);
	lr += scale((*tree).right);
	if (lr > ll)
	{
		return (lr);
	}
	return (ll);
}

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of a binary tree, 0 is tree is NULL
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (scale(tree));
}
