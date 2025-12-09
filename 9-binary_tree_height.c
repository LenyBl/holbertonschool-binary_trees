#include "binary_trees.h"
/**
 *
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		count++;
	}
	else if (tree->right != NULL)
	{
		count++;
	}

	binary_tree_height(tree->left);
	binary_tree_height(tree->right);

	return (tree_count);
}
