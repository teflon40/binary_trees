#include "binary_trees.h"


/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: a pointer to the node to the given node
 *
 * Return: 1 if node is a root, otherwise 0,
 *	Also, if node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node == NULL ? 0 : Is_Root(node));
}

