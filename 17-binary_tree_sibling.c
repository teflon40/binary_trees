#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 *
 * @node: a pointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node if it exists, otherwise,
 *	NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	return (!node || !node->parent ? NULL : Find_Sibling(node));
}
