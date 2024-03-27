#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t p = 0, d = 0;

		p = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		d = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((p > d) ? p : d);
	}
	return (0);
}

/**
 * binary_tree_size - measures size of binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizes = 0;

	if (tree)
	{
		sizes += 1;
		sizes += binary_tree_size(tree->left);
		sizes += binary_tree_size(tree->right);
	}
	return (sizes);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t j, p_size = 0;

	if (tree == NULL)
		return (0);
	j = binary_tree_height(tree);
	p_size = (1 << (j + 1)) - 1;
	if (p_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
