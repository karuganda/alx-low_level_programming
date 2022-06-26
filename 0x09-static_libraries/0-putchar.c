#include "main.h"

/**
 * main - prints main, followed by anew line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *brown;

	for (brown = "_putchar\n"; *brown != '\0'; ++brown)
		_putchar(*brown);
	return (0);
}
