#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the root node of the tree to measure the depth
* Return: depth of a node, 0 is tree is NULL
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = -1;

	while (tree != NULL)
	{
		depth++;
		tree = (*tree).parent;
	}
	if (depth < 0)
		return (0);
	return (depth);
}
