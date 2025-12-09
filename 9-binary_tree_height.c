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
	if (tree == NULL)
		return (0);

	size_t count = 0;

	if (tree->left != NULL)
	{
		count++;
	}
	else if (tree->right != NULL)
	{
		count++;
	}

	printf("Height form %s: %s", tree->n, count);

	size_t  binary_tree_height(tree);
}
