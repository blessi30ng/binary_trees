#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (tree)
	{
		n_nodes += (tree->left || tree->right) ? 1 : 0;
		n_nodes += binary_tree_nodes(tree->left);
		n_nodes += binary_tree_nodes(tree->right);
	}
	return (n_nodes);
}
