#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 *
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL, otherwise, the depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (!tree || !tree->parent ? 0 : binary_tree_depth(tree->parent) + 1);
}
