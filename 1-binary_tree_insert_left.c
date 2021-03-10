#include "binary_trees.h"

/**
* binary_tree_insert_left - entry point
* @parent: pointer to the node to insert the left-child in
* @value: value to put in the new node
* Return: a pointer to the created node
* or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	(*newnode).n = value;
	(*newnode).left = NULL;
	(*newnode).right = NULL;

	if ((*parent).left != NULL)
	{
		(*newnode).parent = parent;
		(*newnode).left = (*parent).left;
		(*parent).left = newnode;
		(*(*newnode).left).parent = newnode;
	}
	else
	{
		(*parent).left = newnode;
		(*newnode).parent = parent;
	}
	return (newnode);
}
