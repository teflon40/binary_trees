#include "binary_trees.h"

/**
 * height - helper function to measure the height of a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 *
 * Return: -1 if tree is NULL, otherwise the height of the tree.
 */
int height(const binary_tree_t *tree)
{
	int hr, hl;

	if (tree == NULL)
		return (-1);

	hr = height(tree->right);
	hl = height(tree->left);

	return (Max(hr, hl) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL, otherwise the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree == NULL ? 0 : height(tree));
}
