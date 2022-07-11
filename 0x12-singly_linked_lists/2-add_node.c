#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that print all the elements of a list_t list
 * @head: input header pointer
 * @str: Input string value
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i, count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
