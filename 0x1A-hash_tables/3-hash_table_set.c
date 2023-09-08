#include "hash_tables.h"

/**
 * set_key_value - mallocs a key-value pair to the table
 * @key: the key, a non empty string
 * @value: the value associated with the key, a string
 *
 * Return: pointer to the created node
 */
hash_node_t *set_key_value(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * set_key_value_lst - set key-value pair to 1st array element
 * @ht: the hash table
 * @key: the key, a non empty string
 * @value: the value associated with the key, a string.
 * @index: the index of the key
 *
 * Return: the node, or NULL if failure
 */
int set_key_value_lst(hash_table_t *ht, const char *key,
		  const char *value, unsigned long int index)
{
	hash_node_t *node = set_key_value(key, value);

	if (node == NULL)
		return (0);
	node->next = NULL;
	ht->array[index] = node;
	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: a pointer to the hash table
 * @key: the key, a non empty string
 * @value: the value associated with the key, a string.
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (set_key_value_lst(ht, key, value, index));
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);
			free(node->value);
			node->value = malloc(strlen(value) + 1);
			if (node->value == NULL)
				return (0);
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		node = set_key_value(key, value);
		if (node == NULL)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (0);
}
