#include "binary_trees.h"
/**
 *
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || func != NULL)
	{
		if (tree->left != NULL)
		{
			func(tree->left);
		}
		else
		{
			func(tree->right);
		}
	}

	binary_tree_preorder(tree, func);
}
