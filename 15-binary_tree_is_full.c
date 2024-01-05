#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL or the tree isn't full, else 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int retval;

	if (tree == NULL)
		return (0);
	else if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	else if (Is_Leaf(tree))
		return (1);

	retval = binary_tree_is_full(tree->left);
	if (retval == 0)
		return (0);
	retval = binary_tree_is_full(tree->right);
	return (retval);
}
