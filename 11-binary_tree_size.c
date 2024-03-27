#include "binary_trees.h"

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
