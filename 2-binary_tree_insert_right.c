#include "binary_trees.h"

/**
* binary_tree_insert_right -  inserts a node as the right-child of another node
* @parent: pointer to the node to insert the right-child in
* @value: value to put in the new node
* Return: a pointer to the created node
* or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if ((*parent).right != NULL)
	{
		(*newnode).parent = parent;
		(*newnode).right = (*parent).right;
		(*parent).right = newnode;
		(*(*newnode).right).parent = newnode;
	}
	else
	{
		(*parent).right = newnode;
		(*newnode).parent = parent;
	}
	return (newnode);
}
