#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node
 * at the end of alist_t list.
 * @head: input
 * @str: input
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	lists_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = _strlen(str);
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
