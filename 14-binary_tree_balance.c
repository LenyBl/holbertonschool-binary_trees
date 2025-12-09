#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int countLeft;
	int countRight;

	if (tree == NULL)
		return (0);

	countLeft = binary_tree_height(tree->left);
	countRight = binary_tree_height(tree->right);

	return (countLeft - countRight);
}
