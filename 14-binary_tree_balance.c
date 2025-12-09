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
	int countTotal;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		countLeft + 1;
	}
	else if (tree->right != NULL)
	{
		countRight + 1;
	}

	countLeft = binary_tree_balance(tree->left);
	countRight = binary_tree_balance(tree->right);

	countTotal = countLeft - countRight;

	return (countTotal);
}
