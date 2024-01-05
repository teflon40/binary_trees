#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL, else count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + Have_Child(tree));
}
