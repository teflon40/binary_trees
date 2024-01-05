#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 *
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node if it exists, otherwise,
 *	NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (!node || !node->parent ? NULL : Find_Uncle(node));
}
