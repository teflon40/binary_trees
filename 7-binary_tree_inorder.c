#include "binary_trees.h"


/**
 * binary_tree_inorder - Traverse a binary tree using in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 *	The value in the node must be passed as an argument to this function.
 *
 * Do nothing, if func or tree is NULL.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
