#include "binary_trees.h"

/**
* _pow - x raised to the power of y
* @x: base
* @y: pow
* Return: pow x y
**/
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 1)
	{
		y = _pow(x, y - 1);
	}
	else
	{
		return (x * y);
	}
	return (x * y);
}

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
* tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
* Return: size of a binary tree
* If tree is NULL, the function must return 0
**/
size_t tree_size(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	count = 1 + tree_size((*tree).left) + tree_size((*tree).right);
	return (count);
}

/**
* binary_tree_is_perfect -  checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 is tree is perfect, 0 if not or tree is NULL
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	int _nodes;

	if (tree == NULL)
		return (0);

	height = scale(tree);
	_nodes = tree_size(tree);
	if (_pow(2, height + 1) - 1 == _nodes)
		return (1);
	return (0);
}
