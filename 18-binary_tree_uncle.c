#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to find the uncle
 *
 * Return: uncle node, or NULL if no uncle or invalid input
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (NULL);
}

