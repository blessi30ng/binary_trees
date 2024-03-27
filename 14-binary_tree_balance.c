#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t p = 0, d = 0;

		p = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		d = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((p > d) ? p : d);
	}
	return (0);
}
