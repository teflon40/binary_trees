#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tree is NULL, otherwise the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right) + Is_Leaf(tree));
}
