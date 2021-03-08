#include "binary_trees.h"

/**
* binary_tree_node - entry point
* @parent: pointer to the parent node of the node to create
* @value: value to put in the new node
* Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	(*newnode).n = value;
	(*newnode).left = NULL;
	(*newnode).right = NULL;
	if (parent == NULL)
	{
		(*newnode).parent = NULL;
		parent = newnode;
	}
	else
	{
		(*newnode).parent = parent;
	}

	return (newnode);
}
