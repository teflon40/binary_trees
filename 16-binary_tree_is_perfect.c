#include "binary_trees.h"

/**
 * find_depth - find the depth of a node.
 *
 * @tree: a pointer to the node.
 *
 * Return: the dept of a node.
 */
int find_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * isPerfectRec - check for perfect.
 *
 * @tree: pointer to the root node of the three.
 * @d: dept
 * @level: level
 *
 * Return: 1 if tree is perfect else 0
 */
int isPerfectRec(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (isPerfectRec(tree->left, d, level + 1) &&
		isPerfectRec(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if it is perfect, else return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = find_depth(tree);

	return (isPerfectRec(tree, d, 0));
}
